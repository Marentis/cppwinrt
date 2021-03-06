// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.Adc.Provider.0.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Adc::Provider {

struct __declspec(uuid("be545828-816d-4de5-a048-aba06958aaa8")) __declspec(novtable) IAdcControllerProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ChannelCount(int32_t * value) = 0;
    virtual HRESULT __stdcall get_ResolutionInBits(int32_t * value) = 0;
    virtual HRESULT __stdcall get_MinValue(int32_t * value) = 0;
    virtual HRESULT __stdcall get_MaxValue(int32_t * value) = 0;
    virtual HRESULT __stdcall get_ChannelMode(winrt::Windows::Devices::Adc::Provider::ProviderAdcChannelMode * value) = 0;
    virtual HRESULT __stdcall put_ChannelMode(winrt::Windows::Devices::Adc::Provider::ProviderAdcChannelMode value) = 0;
    virtual HRESULT __stdcall abi_IsChannelModeSupported(winrt::Windows::Devices::Adc::Provider::ProviderAdcChannelMode channelMode, bool * result) = 0;
    virtual HRESULT __stdcall abi_AcquireChannel(int32_t channel) = 0;
    virtual HRESULT __stdcall abi_ReleaseChannel(int32_t channel) = 0;
    virtual HRESULT __stdcall abi_ReadValue(int32_t channelNumber, int32_t * result) = 0;
};

struct __declspec(uuid("28953668-9359-4c57-bc88-e275e81638c9")) __declspec(novtable) IAdcProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetControllers(Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::Provider::IAdcControllerProvider> ** result) = 0;
};

}

namespace ABI {


}

namespace Windows::Devices::Adc::Provider {

template <typename T> struct impl_IAdcControllerProvider;
template <typename T> struct impl_IAdcProvider;

}

namespace impl {

template <> struct traits<Windows::Devices::Adc::Provider::IAdcControllerProvider>
{
    using abi = ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider;
    template <typename D> using consume = Windows::Devices::Adc::Provider::impl_IAdcControllerProvider<D>;
};

template <> struct traits<Windows::Devices::Adc::Provider::IAdcProvider>
{
    using abi = ABI::Windows::Devices::Adc::Provider::IAdcProvider;
    template <typename D> using consume = Windows::Devices::Adc::Provider::impl_IAdcProvider<D>;
};

}

}
