// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Data.Pdf.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Data::Pdf {

struct __declspec(uuid("ac7ebedd-80fa-4089-846e-81b77ff5a86c")) __declspec(novtable) IPdfDocument : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetPage(uint32_t pageIndex, Windows::Data::Pdf::IPdfPage ** pdfPage) = 0;
    virtual HRESULT __stdcall get_PageCount(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_IsPasswordProtected(bool * value) = 0;
};

struct __declspec(uuid("433a0b5f-c007-4788-90f2-08143d922599")) __declspec(novtable) IPdfDocumentStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_LoadFromFileAsync(Windows::Storage::IStorageFile * file, Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_LoadFromFileWithPasswordAsync(Windows::Storage::IStorageFile * file, hstring password, Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_LoadFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream * inputStream, Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_LoadFromStreamWithPasswordAsync(Windows::Storage::Streams::IRandomAccessStream * inputStream, hstring password, Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> ** asyncInfo) = 0;
};

struct __declspec(uuid("9db4b0c8-5320-4cfc-ad76-493fdad0e594")) __declspec(novtable) IPdfPage : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RenderToStreamAsync(Windows::Storage::Streams::IRandomAccessStream * outputStream, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_RenderWithOptionsToStreamAsync(Windows::Storage::Streams::IRandomAccessStream * outputStream, Windows::Data::Pdf::IPdfPageRenderOptions * options, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_PreparePageAsync(Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall get_Index(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Size * value) = 0;
    virtual HRESULT __stdcall get_Dimensions(Windows::Data::Pdf::IPdfPageDimensions ** value) = 0;
    virtual HRESULT __stdcall get_Rotation(winrt::Windows::Data::Pdf::PdfPageRotation * value) = 0;
    virtual HRESULT __stdcall get_PreferredZoom(float * value) = 0;
};

struct __declspec(uuid("22170471-313e-44e8-835d-63a3e7624a10")) __declspec(novtable) IPdfPageDimensions : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MediaBox(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall get_CropBox(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall get_BleedBox(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall get_TrimBox(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall get_ArtBox(Windows::Foundation::Rect * value) = 0;
};

struct __declspec(uuid("3c98056f-b7cf-4c29-9a04-52d90267f425")) __declspec(novtable) IPdfPageRenderOptions : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SourceRect(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall put_SourceRect(Windows::Foundation::Rect value) = 0;
    virtual HRESULT __stdcall get_DestinationWidth(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_DestinationWidth(uint32_t value) = 0;
    virtual HRESULT __stdcall get_DestinationHeight(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_DestinationHeight(uint32_t value) = 0;
    virtual HRESULT __stdcall get_BackgroundColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_BackgroundColor(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_IsIgnoringHighContrast(bool * value) = 0;
    virtual HRESULT __stdcall put_IsIgnoringHighContrast(bool value) = 0;
    virtual HRESULT __stdcall get_BitmapEncoderId(GUID * value) = 0;
    virtual HRESULT __stdcall put_BitmapEncoderId(GUID value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Data::Pdf::PdfDocument> { using default_interface = Windows::Data::Pdf::IPdfDocument; };
template <> struct traits<Windows::Data::Pdf::PdfPage> { using default_interface = Windows::Data::Pdf::IPdfPage; };
template <> struct traits<Windows::Data::Pdf::PdfPageDimensions> { using default_interface = Windows::Data::Pdf::IPdfPageDimensions; };
template <> struct traits<Windows::Data::Pdf::PdfPageRenderOptions> { using default_interface = Windows::Data::Pdf::IPdfPageRenderOptions; };

}

namespace Windows::Data::Pdf {

template <typename T> struct impl_IPdfDocument;
template <typename T> struct impl_IPdfDocumentStatics;
template <typename T> struct impl_IPdfPage;
template <typename T> struct impl_IPdfPageDimensions;
template <typename T> struct impl_IPdfPageRenderOptions;

}

namespace impl {

template <> struct traits<Windows::Data::Pdf::IPdfDocument>
{
    using abi = ABI::Windows::Data::Pdf::IPdfDocument;
    template <typename D> using consume = Windows::Data::Pdf::impl_IPdfDocument<D>;
};

template <> struct traits<Windows::Data::Pdf::IPdfDocumentStatics>
{
    using abi = ABI::Windows::Data::Pdf::IPdfDocumentStatics;
    template <typename D> using consume = Windows::Data::Pdf::impl_IPdfDocumentStatics<D>;
};

template <> struct traits<Windows::Data::Pdf::IPdfPage>
{
    using abi = ABI::Windows::Data::Pdf::IPdfPage;
    template <typename D> using consume = Windows::Data::Pdf::impl_IPdfPage<D>;
};

template <> struct traits<Windows::Data::Pdf::IPdfPageDimensions>
{
    using abi = ABI::Windows::Data::Pdf::IPdfPageDimensions;
    template <typename D> using consume = Windows::Data::Pdf::impl_IPdfPageDimensions<D>;
};

template <> struct traits<Windows::Data::Pdf::IPdfPageRenderOptions>
{
    using abi = ABI::Windows::Data::Pdf::IPdfPageRenderOptions;
    template <typename D> using consume = Windows::Data::Pdf::impl_IPdfPageRenderOptions<D>;
};

template <> struct traits<Windows::Data::Pdf::PdfDocument>
{
    using abi = ABI::Windows::Data::Pdf::PdfDocument;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Pdf.PdfDocument"; }
};

template <> struct traits<Windows::Data::Pdf::PdfPage>
{
    using abi = ABI::Windows::Data::Pdf::PdfPage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Pdf.PdfPage"; }
};

template <> struct traits<Windows::Data::Pdf::PdfPageDimensions>
{
    using abi = ABI::Windows::Data::Pdf::PdfPageDimensions;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Pdf.PdfPageDimensions"; }
};

template <> struct traits<Windows::Data::Pdf::PdfPageRenderOptions>
{
    using abi = ABI::Windows::Data::Pdf::PdfPageRenderOptions;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Pdf.PdfPageRenderOptions"; }
};

}

}
