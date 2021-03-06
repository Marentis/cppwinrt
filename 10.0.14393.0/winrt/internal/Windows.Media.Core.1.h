// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Media.Core.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Media.0.h"
#include "Windows.Media.Capture.0.h"
#include "Windows.Media.Devices.0.h"
#include "Windows.Media.Effects.0.h"
#include "Windows.Media.MediaProperties.0.h"
#include "Windows.Media.Playback.0.h"
#include "Windows.Media.Protection.0.h"
#include "Windows.Media.Streaming.Adaptive.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.FileProperties.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Media.Devices.Core.1.h"
#include "Windows.Media.FaceAnalysis.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Core {

struct MseTimeRange
{
    Windows::Foundation::TimeSpan Start;
    Windows::Foundation::TimeSpan End;
};

struct TimedTextPadding
{
    double Before;
    double After;
    double Start;
    double End;
    winrt::Windows::Media::Core::TimedTextUnit Unit;
};

struct TimedTextSize
{
    double Height;
    double Width;
    winrt::Windows::Media::Core::TimedTextUnit Unit;
};

struct TimedTextDouble
{
    double Value;
    winrt::Windows::Media::Core::TimedTextUnit Unit;
};

struct TimedTextPoint
{
    double X;
    double Y;
    winrt::Windows::Media::Core::TimedTextUnit Unit;
};

}

namespace Windows::Media::Core {

using MseTimeRange = ABI::Windows::Media::Core::MseTimeRange;
using TimedTextPadding = ABI::Windows::Media::Core::TimedTextPadding;
using TimedTextSize = ABI::Windows::Media::Core::TimedTextSize;
using TimedTextDouble = ABI::Windows::Media::Core::TimedTextDouble;
using TimedTextPoint = ABI::Windows::Media::Core::TimedTextPoint;

}

namespace ABI::Windows::Media::Core {

struct __declspec(uuid("1e3692e4-4027-4847-a70b-df1d9a2a7b04")) __declspec(novtable) IAudioStreamDescriptor : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EncodingProperties(Windows::Media::MediaProperties::IAudioEncodingProperties ** encodingProperties) = 0;
};

struct __declspec(uuid("2e68f1f6-a448-497b-8840-85082665acf9")) __declspec(novtable) IAudioStreamDescriptor2 : Windows::IInspectable
{
    virtual HRESULT __stdcall put_LeadingEncoderPadding(Windows::Foundation::IReference<uint32_t> * value) = 0;
    virtual HRESULT __stdcall get_LeadingEncoderPadding(Windows::Foundation::IReference<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall put_TrailingEncoderPadding(Windows::Foundation::IReference<uint32_t> * value) = 0;
    virtual HRESULT __stdcall get_TrailingEncoderPadding(Windows::Foundation::IReference<uint32_t> ** value) = 0;
};

struct __declspec(uuid("4a86ce9e-4cb1-4380-8e0c-83504b7f5bf3")) __declspec(novtable) IAudioStreamDescriptorFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties, Windows::Media::Core::IAudioStreamDescriptor ** result) = 0;
};

struct __declspec(uuid("f23b6e77-3ef7-40de-b943-068b1321701d")) __declspec(novtable) IAudioTrack : Windows::IInspectable
{
    virtual HRESULT __stdcall add_OpenFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::AudioTrack, Windows::Media::Core::AudioTrackOpenFailedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_OpenFailed(event_token token) = 0;
    virtual HRESULT __stdcall abi_GetEncodingProperties(Windows::Media::MediaProperties::IAudioEncodingProperties ** value) = 0;
    virtual HRESULT __stdcall get_PlaybackItem(Windows::Media::Playback::IMediaPlaybackItem ** value) = 0;
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_SupportInfo(Windows::Media::Core::IAudioTrackSupportInfo ** value) = 0;
};

struct __declspec(uuid("eeddb9b9-bb7c-4112-bf76-9384676f824b")) __declspec(novtable) IAudioTrackOpenFailedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ExtendedError(HRESULT * value) = 0;
};

struct __declspec(uuid("178beff7-cc39-44a6-b951-4a5653f073fa")) __declspec(novtable) IAudioTrackSupportInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DecoderStatus(winrt::Windows::Media::Core::MediaDecoderStatus * value) = 0;
    virtual HRESULT __stdcall get_Degradation(winrt::Windows::Media::Core::AudioDecoderDegradation * value) = 0;
    virtual HRESULT __stdcall get_DegradationReason(winrt::Windows::Media::Core::AudioDecoderDegradationReason * value) = 0;
    virtual HRESULT __stdcall get_MediaSourceStatus(winrt::Windows::Media::Core::MediaSourceStatus * value) = 0;
};

struct __declspec(uuid("7c7f676d-1fbc-4e2d-9a87-ee38bd1dc637")) __declspec(novtable) IDataCue : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Data(Windows::Storage::Streams::IBuffer * value) = 0;
    virtual HRESULT __stdcall get_Data(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("19918426-c65b-46ba-85f8-13880576c90a")) __declspec(novtable) IFaceDetectedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ResultFrame(Windows::Media::Core::IFaceDetectionEffectFrame ** value) = 0;
};

struct __declspec(uuid("ae15ebd2-0542-42a9-bc90-f283a29f46c1")) __declspec(novtable) IFaceDetectionEffect : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Enabled(bool value) = 0;
    virtual HRESULT __stdcall get_Enabled(bool * value) = 0;
    virtual HRESULT __stdcall put_DesiredDetectionInterval(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_DesiredDetectionInterval(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall add_FaceDetected(Windows::Foundation::TypedEventHandler<Windows::Media::Core::FaceDetectionEffect, Windows::Media::Core::FaceDetectedEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_FaceDetected(event_token cookie) = 0;
};

struct __declspec(uuid("43dca081-b848-4f33-b702-1fd2624fb016")) __declspec(novtable) IFaceDetectionEffectDefinition : Windows::IInspectable
{
    virtual HRESULT __stdcall put_DetectionMode(winrt::Windows::Media::Core::FaceDetectionMode value) = 0;
    virtual HRESULT __stdcall get_DetectionMode(winrt::Windows::Media::Core::FaceDetectionMode * value) = 0;
    virtual HRESULT __stdcall put_SynchronousDetectionEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_SynchronousDetectionEnabled(bool * value) = 0;
};

struct __declspec(uuid("8ab08993-5dc8-447b-a247-5270bd802ece")) __declspec(novtable) IFaceDetectionEffectFrame : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DetectedFaces(Windows::Foundation::Collections::IVectorView<Windows::Media::FaceAnalysis::DetectedFace> ** value) = 0;
};

struct __declspec(uuid("55f1a7ae-d957-4dc9-9d1c-8553a82a7d99")) __declspec(novtable) IHighDynamicRangeControl : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Enabled(bool value) = 0;
    virtual HRESULT __stdcall get_Enabled(bool * value) = 0;
};

struct __declspec(uuid("0f57806b-253b-4119-bb40-3a90e51384f7")) __declspec(novtable) IHighDynamicRangeOutput : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Certainty(double * value) = 0;
    virtual HRESULT __stdcall get_FrameControllers(Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::Core::FrameController> ** value) = 0;
};

struct __declspec(uuid("2b7e40aa-de07-424f-83f1-f1de46c4fa2e")) __declspec(novtable) IMediaBinder : Windows::IInspectable
{
    virtual HRESULT __stdcall add_Binding(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBinder, Windows::Media::Core::MediaBindingEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Binding(event_token token) = 0;
    virtual HRESULT __stdcall get_Token(hstring * value) = 0;
    virtual HRESULT __stdcall put_Token(hstring value) = 0;
    virtual HRESULT __stdcall get_Source(Windows::Media::Core::IMediaSource2 ** value) = 0;
};

struct __declspec(uuid("b61cb25a-1b6d-4630-a86d-2f0837f712e5")) __declspec(novtable) IMediaBindingEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall add_Canceled(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBindingEventArgs, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Canceled(event_token token) = 0;
    virtual HRESULT __stdcall get_MediaBinder(Windows::Media::Core::IMediaBinder ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** deferral) = 0;
    virtual HRESULT __stdcall abi_SetUri(Windows::Foundation::IUriRuntimeClass * uri) = 0;
    virtual HRESULT __stdcall abi_SetStream(Windows::Storage::Streams::IRandomAccessStream * stream, hstring contentType) = 0;
    virtual HRESULT __stdcall abi_SetStreamReference(Windows::Storage::Streams::IRandomAccessStreamReference * stream, hstring contentType) = 0;
};

struct __declspec(uuid("c7d15e5d-59dc-431f-a0ee-27744323b36d")) __declspec(novtable) IMediaCue : Windows::IInspectable
{
    virtual HRESULT __stdcall put_StartTime(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_StartTime(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_Duration(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_Id(hstring value) = 0;
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
};

struct __declspec(uuid("d12f47f7-5fa4-4e68-9fe5-32160dcee57e")) __declspec(novtable) IMediaCueEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Cue(Windows::Media::Core::IMediaCue ** value) = 0;
};

struct __declspec(uuid("e7bfb599-a09d-4c21-bcdf-20af4f86b3d9")) __declspec(novtable) IMediaSource : Windows::IInspectable
{
};

struct __declspec(uuid("2eb61048-655f-4c37-b813-b4e45dfa0abe")) __declspec(novtable) IMediaSource2 : Windows::IInspectable
{
    virtual HRESULT __stdcall add_OpenOperationCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_OpenOperationCompleted(event_token token) = 0;
    virtual HRESULT __stdcall get_CustomProperties(Windows::Foundation::Collections::IPropertySet ** value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> ** value) = 0;
    virtual HRESULT __stdcall get_IsOpen(bool * value) = 0;
    virtual HRESULT __stdcall get_ExternalTimedTextSources(Windows::Foundation::Collections::IObservableVector<Windows::Media::Core::TimedTextSource> ** value) = 0;
    virtual HRESULT __stdcall get_ExternalTimedMetadataTracks(Windows::Foundation::Collections::IObservableVector<Windows::Media::Core::TimedMetadataTrack> ** value) = 0;
};

struct __declspec(uuid("b59f0d9b-4b6e-41ed-bbb4-7c7509a994ad")) __declspec(novtable) IMediaSource3 : Windows::IInspectable
{
    virtual HRESULT __stdcall add_StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceStateChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StateChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_State(winrt::Windows::Media::Core::MediaSourceState * value) = 0;
    virtual HRESULT __stdcall abi_Reset() = 0;
};

struct __declspec(uuid("5c0a8965-37c5-4e9d-8d21-1cdee90cecc6")) __declspec(novtable) IMediaSourceError : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ExtendedError(HRESULT * value) = 0;
};

struct __declspec(uuid("fc682ceb-e281-477c-a8e0-1acd654114c8")) __declspec(novtable) IMediaSourceOpenOperationCompletedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Error(Windows::Media::Core::IMediaSourceError ** value) = 0;
};

struct __declspec(uuid("0a30af82-9071-4bac-bc39-ca2a93b717a9")) __declspec(novtable) IMediaSourceStateChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OldState(winrt::Windows::Media::Core::MediaSourceState * value) = 0;
    virtual HRESULT __stdcall get_NewState(winrt::Windows::Media::Core::MediaSourceState * value) = 0;
};

struct __declspec(uuid("f77d6fa4-4652-410e-b1d8-e9a5e245a45c")) __declspec(novtable) IMediaSourceStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFromAdaptiveMediaSource(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource * mediaSource, Windows::Media::Core::IMediaSource2 ** result) = 0;
    virtual HRESULT __stdcall abi_CreateFromMediaStreamSource(Windows::Media::Core::IMediaStreamSource * mediaSource, Windows::Media::Core::IMediaSource2 ** result) = 0;
    virtual HRESULT __stdcall abi_CreateFromMseStreamSource(Windows::Media::Core::IMseStreamSource * mediaSource, Windows::Media::Core::IMediaSource2 ** result) = 0;
    virtual HRESULT __stdcall abi_CreateFromIMediaSource(Windows::Media::Core::IMediaSource * mediaSource, Windows::Media::Core::IMediaSource2 ** result) = 0;
    virtual HRESULT __stdcall abi_CreateFromStorageFile(Windows::Storage::IStorageFile * file, Windows::Media::Core::IMediaSource2 ** result) = 0;
    virtual HRESULT __stdcall abi_CreateFromStream(Windows::Storage::Streams::IRandomAccessStream * stream, hstring contentType, Windows::Media::Core::IMediaSource2 ** result) = 0;
    virtual HRESULT __stdcall abi_CreateFromStreamReference(Windows::Storage::Streams::IRandomAccessStreamReference * stream, hstring contentType, Windows::Media::Core::IMediaSource2 ** result) = 0;
    virtual HRESULT __stdcall abi_CreateFromUri(Windows::Foundation::IUriRuntimeClass * uri, Windows::Media::Core::IMediaSource2 ** result) = 0;
};

struct __declspec(uuid("eee161a4-7f13-4896-b8cb-df0de5bcb9f1")) __declspec(novtable) IMediaSourceStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFromMediaBinder(Windows::Media::Core::IMediaBinder * binder, Windows::Media::Core::IMediaSource2 ** result) = 0;
};

struct __declspec(uuid("80f16e6e-92f7-451e-97d2-afd80742da70")) __declspec(novtable) IMediaStreamDescriptor : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsSelected(bool * selected) = 0;
    virtual HRESULT __stdcall put_Name(hstring value) = 0;
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall put_Language(hstring value) = 0;
    virtual HRESULT __stdcall get_Language(hstring * value) = 0;
};

struct __declspec(uuid("5c8db627-4b80-4361-9837-6cb7481ad9d6")) __declspec(novtable) IMediaStreamSample : Windows::IInspectable
{
    virtual HRESULT __stdcall add_Processed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSample, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Processed(event_token token) = 0;
    virtual HRESULT __stdcall get_Buffer(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_Timestamp(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_ExtendedProperties(Windows::Foundation::Collections::IMap<GUID, Windows::IInspectable> ** value) = 0;
    virtual HRESULT __stdcall get_Protection(Windows::Media::Core::IMediaStreamSampleProtectionProperties ** value) = 0;
    virtual HRESULT __stdcall put_DecodeTimestamp(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_DecodeTimestamp(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_Duration(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_KeyFrame(bool value) = 0;
    virtual HRESULT __stdcall get_KeyFrame(bool * value) = 0;
    virtual HRESULT __stdcall put_Discontinuous(bool value) = 0;
    virtual HRESULT __stdcall get_Discontinuous(bool * value) = 0;
};

struct __declspec(uuid("4eb88292-ecdf-493e-841d-dd4add7caca2")) __declspec(novtable) IMediaStreamSampleProtectionProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetKeyIdentifier(uint32_t __valueSize, uint8_t * value) = 0;
    virtual HRESULT __stdcall abi_GetKeyIdentifier(uint32_t * __valueSize, uint8_t ** value) = 0;
    virtual HRESULT __stdcall abi_SetInitializationVector(uint32_t __valueSize, uint8_t * value) = 0;
    virtual HRESULT __stdcall abi_GetInitializationVector(uint32_t * __valueSize, uint8_t ** value) = 0;
    virtual HRESULT __stdcall abi_SetSubSampleMapping(uint32_t __valueSize, uint8_t * value) = 0;
    virtual HRESULT __stdcall abi_GetSubSampleMapping(uint32_t * __valueSize, uint8_t ** value) = 0;
};

struct __declspec(uuid("dfdf218f-a6cf-4579-be41-73dd941ad972")) __declspec(novtable) IMediaStreamSampleStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFromBuffer(Windows::Storage::Streams::IBuffer * buffer, Windows::Foundation::TimeSpan timestamp, Windows::Media::Core::IMediaStreamSample ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFromStreamAsync(Windows::Storage::Streams::IInputStream * stream, uint32_t count, Windows::Foundation::TimeSpan timestamp, Windows::Foundation::IAsyncOperation<Windows::Media::Core::MediaStreamSample> ** value) = 0;
};

struct __declspec(uuid("3712d543-45eb-4138-aa62-c01e26f3843f")) __declspec(novtable) IMediaStreamSource : Windows::IInspectable
{
    virtual HRESULT __stdcall add_Closed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceClosedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Closed(event_token token) = 0;
    virtual HRESULT __stdcall add_Starting(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceStartingEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Starting(event_token token) = 0;
    virtual HRESULT __stdcall add_Paused(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Paused(event_token token) = 0;
    virtual HRESULT __stdcall add_SampleRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SampleRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_SwitchStreamsRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SwitchStreamsRequested(event_token token) = 0;
    virtual HRESULT __stdcall abi_NotifyError(winrt::Windows::Media::Core::MediaStreamSourceErrorStatus errorStatus) = 0;
    virtual HRESULT __stdcall abi_AddStreamDescriptor(Windows::Media::Core::IMediaStreamDescriptor * descriptor) = 0;
    virtual HRESULT __stdcall put_MediaProtectionManager(Windows::Media::Protection::IMediaProtectionManager * value) = 0;
    virtual HRESULT __stdcall get_MediaProtectionManager(Windows::Media::Protection::IMediaProtectionManager ** value) = 0;
    virtual HRESULT __stdcall put_Duration(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_CanSeek(bool value) = 0;
    virtual HRESULT __stdcall get_CanSeek(bool * value) = 0;
    virtual HRESULT __stdcall put_BufferTime(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_BufferTime(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall abi_SetBufferedRange(Windows::Foundation::TimeSpan startOffset, Windows::Foundation::TimeSpan endOffset) = 0;
    virtual HRESULT __stdcall get_MusicProperties(Windows::Storage::FileProperties::IMusicProperties ** value) = 0;
    virtual HRESULT __stdcall get_VideoProperties(Windows::Storage::FileProperties::IVideoProperties ** value) = 0;
    virtual HRESULT __stdcall put_Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference * value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference ** value) = 0;
    virtual HRESULT __stdcall abi_AddProtectionKey(Windows::Media::Core::IMediaStreamDescriptor * streamDescriptor, uint32_t __keyIdentifierSize, uint8_t * keyIdentifier, uint32_t __licenseDataSize, uint8_t * licenseData) = 0;
};

struct __declspec(uuid("ec55d0ad-2e6a-4f74-adbb-b562d1533849")) __declspec(novtable) IMediaStreamSource2 : Windows::IInspectable
{
    virtual HRESULT __stdcall add_SampleRendered(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SampleRendered(event_token token) = 0;
};

struct __declspec(uuid("cd8c7eb2-4816-4e24-88f0-491ef7386406")) __declspec(novtable) IMediaStreamSourceClosedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Request(Windows::Media::Core::IMediaStreamSourceClosedRequest ** value) = 0;
};

struct __declspec(uuid("907c00e9-18a3-4951-887a-2c1eebd5c69e")) __declspec(novtable) IMediaStreamSourceClosedRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Reason(winrt::Windows::Media::Core::MediaStreamSourceClosedReason * value) = 0;
};

struct __declspec(uuid("ef77e0d9-d158-4b7a-863f-203342fbfd41")) __declspec(novtable) IMediaStreamSourceFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFromDescriptor(Windows::Media::Core::IMediaStreamDescriptor * descriptor, Windows::Media::Core::IMediaStreamSource ** result) = 0;
    virtual HRESULT __stdcall abi_CreateFromDescriptors(Windows::Media::Core::IMediaStreamDescriptor * descriptor, Windows::Media::Core::IMediaStreamDescriptor * descriptor2, Windows::Media::Core::IMediaStreamSource ** result) = 0;
};

struct __declspec(uuid("9d697b05-d4f2-4c7a-9dfe-8d6cd0b3ee84")) __declspec(novtable) IMediaStreamSourceSampleRenderedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SampleLag(Windows::Foundation::TimeSpan * value) = 0;
};

struct __declspec(uuid("4db341a9-3501-4d9b-83f9-8f235c822532")) __declspec(novtable) IMediaStreamSourceSampleRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StreamDescriptor(Windows::Media::Core::IMediaStreamDescriptor ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral ** deferral) = 0;
    virtual HRESULT __stdcall put_Sample(Windows::Media::Core::IMediaStreamSample * value) = 0;
    virtual HRESULT __stdcall get_Sample(Windows::Media::Core::IMediaStreamSample ** value) = 0;
    virtual HRESULT __stdcall abi_ReportSampleProgress(uint32_t progress) = 0;
};

struct __declspec(uuid("7895cc02-f982-43c8-9d16-c62d999319be")) __declspec(novtable) IMediaStreamSourceSampleRequestDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

struct __declspec(uuid("10f9bb9e-71c5-492f-847f-0da1f35e81f8")) __declspec(novtable) IMediaStreamSourceSampleRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Request(Windows::Media::Core::IMediaStreamSourceSampleRequest ** value) = 0;
};

struct __declspec(uuid("f41468f2-c274-4940-a5bb-28a572452fa7")) __declspec(novtable) IMediaStreamSourceStartingEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Request(Windows::Media::Core::IMediaStreamSourceStartingRequest ** value) = 0;
};

struct __declspec(uuid("2a9093e4-35c4-4b1b-a791-0d99db56dd1d")) __declspec(novtable) IMediaStreamSourceStartingRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StartPosition(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral ** deferral) = 0;
    virtual HRESULT __stdcall abi_SetActualStartPosition(Windows::Foundation::TimeSpan position) = 0;
};

struct __declspec(uuid("3f1356a5-6340-4dc4-9910-068ed9f598f8")) __declspec(novtable) IMediaStreamSourceStartingRequestDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

struct __declspec(uuid("41b8808e-38a9-4ec3-9ba0-b69b85501e90")) __declspec(novtable) IMediaStreamSourceSwitchStreamsRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OldStreamDescriptor(Windows::Media::Core::IMediaStreamDescriptor ** value) = 0;
    virtual HRESULT __stdcall get_NewStreamDescriptor(Windows::Media::Core::IMediaStreamDescriptor ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral ** deferral) = 0;
};

struct __declspec(uuid("bee3d835-a505-4f9a-b943-2b8cb1b4bbd9")) __declspec(novtable) IMediaStreamSourceSwitchStreamsRequestDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

struct __declspec(uuid("42202b72-6ea1-4677-981e-350a0da412aa")) __declspec(novtable) IMediaStreamSourceSwitchStreamsRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Request(Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest ** value) = 0;
};

struct __declspec(uuid("03e1fafc-c931-491a-b46b-c10ee8c256b7")) __declspec(novtable) IMediaTrack : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_Language(hstring * value) = 0;
    virtual HRESULT __stdcall get_TrackKind(winrt::Windows::Media::Core::MediaTrackKind * value) = 0;
    virtual HRESULT __stdcall put_Label(hstring value) = 0;
    virtual HRESULT __stdcall get_Label(hstring * value) = 0;
};

struct __declspec(uuid("0c1aa3e3-df8d-4079-a3fe-6849184b4e2f")) __declspec(novtable) IMseSourceBuffer : Windows::IInspectable
{
    virtual HRESULT __stdcall add_UpdateStarting(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_UpdateStarting(event_token token) = 0;
    virtual HRESULT __stdcall add_Updated(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Updated(event_token token) = 0;
    virtual HRESULT __stdcall add_UpdateEnded(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_UpdateEnded(event_token token) = 0;
    virtual HRESULT __stdcall add_ErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ErrorOccurred(event_token token) = 0;
    virtual HRESULT __stdcall add_Aborted(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Aborted(event_token token) = 0;
    virtual HRESULT __stdcall get_Mode(winrt::Windows::Media::Core::MseAppendMode * value) = 0;
    virtual HRESULT __stdcall put_Mode(winrt::Windows::Media::Core::MseAppendMode value) = 0;
    virtual HRESULT __stdcall get_IsUpdating(bool * value) = 0;
    virtual HRESULT __stdcall get_Buffered(Windows::Foundation::Collections::IVectorView<Windows::Media::Core::MseTimeRange> ** value) = 0;
    virtual HRESULT __stdcall get_TimestampOffset(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_TimestampOffset(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_AppendWindowStart(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_AppendWindowStart(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_AppendWindowEnd(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> ** value) = 0;
    virtual HRESULT __stdcall put_AppendWindowEnd(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> * value) = 0;
    virtual HRESULT __stdcall abi_AppendBuffer(Windows::Storage::Streams::IBuffer * buffer) = 0;
    virtual HRESULT __stdcall abi_AppendStream(Windows::Storage::Streams::IInputStream * stream) = 0;
    virtual HRESULT __stdcall abi_AppendStreamMaxSize(Windows::Storage::Streams::IInputStream * stream, uint64_t maxSize) = 0;
    virtual HRESULT __stdcall abi_Abort() = 0;
    virtual HRESULT __stdcall abi_Remove(Windows::Foundation::TimeSpan start, Windows::Foundation::IReference<Windows::Foundation::TimeSpan> * end) = 0;
};

struct __declspec(uuid("95fae8e7-a8e7-4ebf-8927-145e940ba511")) __declspec(novtable) IMseSourceBufferList : Windows::IInspectable
{
    virtual HRESULT __stdcall add_SourceBufferAdded(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SourceBufferAdded(event_token token) = 0;
    virtual HRESULT __stdcall add_SourceBufferRemoved(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SourceBufferRemoved(event_token token) = 0;
    virtual HRESULT __stdcall get_Buffers(Windows::Foundation::Collections::IVectorView<Windows::Media::Core::MseSourceBuffer> ** value) = 0;
};

struct __declspec(uuid("b0b4198d-02f4-4923-88dd-81bc3f360ffa")) __declspec(novtable) IMseStreamSource : Windows::IInspectable
{
    virtual HRESULT __stdcall add_Opened(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Opened(event_token token) = 0;
    virtual HRESULT __stdcall add_Ended(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Ended(event_token token) = 0;
    virtual HRESULT __stdcall add_Closed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Closed(event_token token) = 0;
    virtual HRESULT __stdcall get_SourceBuffers(Windows::Media::Core::IMseSourceBufferList ** value) = 0;
    virtual HRESULT __stdcall get_ActiveSourceBuffers(Windows::Media::Core::IMseSourceBufferList ** value) = 0;
    virtual HRESULT __stdcall get_ReadyState(winrt::Windows::Media::Core::MseReadyState * value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> ** value) = 0;
    virtual HRESULT __stdcall put_Duration(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> * value) = 0;
    virtual HRESULT __stdcall abi_AddSourceBuffer(hstring mimeType, Windows::Media::Core::IMseSourceBuffer ** buffer) = 0;
    virtual HRESULT __stdcall abi_RemoveSourceBuffer(Windows::Media::Core::IMseSourceBuffer * buffer) = 0;
    virtual HRESULT __stdcall abi_EndOfStream(winrt::Windows::Media::Core::MseEndOfStreamStatus status) = 0;
};

struct __declspec(uuid("465c679d-d570-43ce-ba21-0bff5f3fbd0a")) __declspec(novtable) IMseStreamSourceStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_IsContentTypeSupported(hstring contentType, bool * value) = 0;
};

struct __declspec(uuid("c04ba319-ca41-4813-bffd-7b08b0ed2557")) __declspec(novtable) ISceneAnalysisEffect : Windows::IInspectable
{
    virtual HRESULT __stdcall get_HighDynamicRangeAnalyzer(Windows::Media::Core::IHighDynamicRangeControl ** value) = 0;
    virtual HRESULT __stdcall put_DesiredAnalysisInterval(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_DesiredAnalysisInterval(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall add_SceneAnalyzed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::SceneAnalysisEffect, Windows::Media::Core::SceneAnalyzedEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_SceneAnalyzed(event_token cookie) = 0;
};

struct __declspec(uuid("d8b10e4c-7fd9-42e1-85eb-6572c297c987")) __declspec(novtable) ISceneAnalysisEffectFrame : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FrameControlValues(Windows::Media::Capture::ICapturedFrameControlValues ** value) = 0;
    virtual HRESULT __stdcall get_HighDynamicRange(Windows::Media::Core::IHighDynamicRangeOutput ** value) = 0;
};

struct __declspec(uuid("146b9588-2851-45e4-ad55-44cf8df8db4d")) __declspec(novtable) ISceneAnalyzedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ResultFrame(Windows::Media::Core::ISceneAnalysisEffectFrame ** value) = 0;
};

struct __declspec(uuid("77206f1f-c34f-494f-8077-2bad9ff4ecf1")) __declspec(novtable) ISingleSelectMediaTrackList : Windows::IInspectable
{
    virtual HRESULT __stdcall add_SelectedIndexChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Core::ISingleSelectMediaTrackList, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SelectedIndexChanged(event_token token) = 0;
    virtual HRESULT __stdcall put_SelectedIndex(int32_t value) = 0;
    virtual HRESULT __stdcall get_SelectedIndex(int32_t * value) = 0;
};

struct __declspec(uuid("9e6aed9e-f67a-49a9-b330-cf03b0e9cf07")) __declspec(novtable) ITimedMetadataTrack : Windows::IInspectable
{
    virtual HRESULT __stdcall add_CueEntered(Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CueEntered(event_token token) = 0;
    virtual HRESULT __stdcall add_CueExited(Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CueExited(event_token token) = 0;
    virtual HRESULT __stdcall add_TrackFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::TimedMetadataTrackFailedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_TrackFailed(event_token token) = 0;
    virtual HRESULT __stdcall get_Cues(Windows::Foundation::Collections::IVectorView<Windows::Media::Core::IMediaCue> ** value) = 0;
    virtual HRESULT __stdcall get_ActiveCues(Windows::Foundation::Collections::IVectorView<Windows::Media::Core::IMediaCue> ** value) = 0;
    virtual HRESULT __stdcall get_TimedMetadataKind(winrt::Windows::Media::Core::TimedMetadataKind * value) = 0;
    virtual HRESULT __stdcall get_DispatchType(hstring * value) = 0;
    virtual HRESULT __stdcall abi_AddCue(Windows::Media::Core::IMediaCue * cue) = 0;
    virtual HRESULT __stdcall abi_RemoveCue(Windows::Media::Core::IMediaCue * cue) = 0;
};

struct __declspec(uuid("21b4b648-9f9d-40ba-a8f3-1a92753aef0b")) __declspec(novtable) ITimedMetadataTrack2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PlaybackItem(Windows::Media::Playback::IMediaPlaybackItem ** value) = 0;
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
};

struct __declspec(uuid("b3767915-4114-4819-b9d9-dd76089e72f8")) __declspec(novtable) ITimedMetadataTrackError : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ErrorCode(winrt::Windows::Media::Core::TimedMetadataTrackErrorCode * value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(HRESULT * value) = 0;
};

struct __declspec(uuid("8dd57611-97b3-4e1f-852c-0f482c81ad26")) __declspec(novtable) ITimedMetadataTrackFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring id, hstring language, winrt::Windows::Media::Core::TimedMetadataKind kind, Windows::Media::Core::ITimedMetadataTrack ** value) = 0;
};

struct __declspec(uuid("a57fc9d1-6789-4d4d-b07f-84b4f31acb70")) __declspec(novtable) ITimedMetadataTrackFailedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Error(Windows::Media::Core::ITimedMetadataTrackError ** value) = 0;
};

struct __declspec(uuid("51c79e51-3b86-494d-b359-bb2ea7aca9a9")) __declspec(novtable) ITimedTextCue : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CueRegion(Windows::Media::Core::ITimedTextRegion ** value) = 0;
    virtual HRESULT __stdcall put_CueRegion(Windows::Media::Core::ITimedTextRegion * value) = 0;
    virtual HRESULT __stdcall get_CueStyle(Windows::Media::Core::ITimedTextStyle ** value) = 0;
    virtual HRESULT __stdcall put_CueStyle(Windows::Media::Core::ITimedTextStyle * value) = 0;
    virtual HRESULT __stdcall get_Lines(Windows::Foundation::Collections::IVector<Windows::Media::Core::TimedTextLine> ** value) = 0;
};

struct __declspec(uuid("978d7ce2-7308-4c66-be50-65777289f5df")) __declspec(novtable) ITimedTextLine : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Text(hstring * value) = 0;
    virtual HRESULT __stdcall put_Text(hstring value) = 0;
    virtual HRESULT __stdcall get_Subformats(Windows::Foundation::Collections::IVector<Windows::Media::Core::TimedTextSubformat> ** value) = 0;
};

struct __declspec(uuid("1ed0881f-8a06-4222-9f59-b21bf40124b4")) __declspec(novtable) ITimedTextRegion : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall put_Name(hstring value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Media::Core::TimedTextPoint * value) = 0;
    virtual HRESULT __stdcall put_Position(Windows::Media::Core::TimedTextPoint value) = 0;
    virtual HRESULT __stdcall get_Extent(Windows::Media::Core::TimedTextSize * value) = 0;
    virtual HRESULT __stdcall put_Extent(Windows::Media::Core::TimedTextSize value) = 0;
    virtual HRESULT __stdcall get_Background(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_Background(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_WritingMode(winrt::Windows::Media::Core::TimedTextWritingMode * value) = 0;
    virtual HRESULT __stdcall put_WritingMode(winrt::Windows::Media::Core::TimedTextWritingMode value) = 0;
    virtual HRESULT __stdcall get_DisplayAlignment(winrt::Windows::Media::Core::TimedTextDisplayAlignment * value) = 0;
    virtual HRESULT __stdcall put_DisplayAlignment(winrt::Windows::Media::Core::TimedTextDisplayAlignment value) = 0;
    virtual HRESULT __stdcall get_LineHeight(Windows::Media::Core::TimedTextDouble * value) = 0;
    virtual HRESULT __stdcall put_LineHeight(Windows::Media::Core::TimedTextDouble value) = 0;
    virtual HRESULT __stdcall get_IsOverflowClipped(bool * value) = 0;
    virtual HRESULT __stdcall put_IsOverflowClipped(bool value) = 0;
    virtual HRESULT __stdcall get_Padding(Windows::Media::Core::TimedTextPadding * value) = 0;
    virtual HRESULT __stdcall put_Padding(Windows::Media::Core::TimedTextPadding value) = 0;
    virtual HRESULT __stdcall get_TextWrapping(winrt::Windows::Media::Core::TimedTextWrapping * value) = 0;
    virtual HRESULT __stdcall put_TextWrapping(winrt::Windows::Media::Core::TimedTextWrapping value) = 0;
    virtual HRESULT __stdcall get_ZIndex(int32_t * value) = 0;
    virtual HRESULT __stdcall put_ZIndex(int32_t value) = 0;
    virtual HRESULT __stdcall get_ScrollMode(winrt::Windows::Media::Core::TimedTextScrollMode * value) = 0;
    virtual HRESULT __stdcall put_ScrollMode(winrt::Windows::Media::Core::TimedTextScrollMode value) = 0;
};

struct __declspec(uuid("c4ed9ba6-101f-404d-a949-82f33fcd93b7")) __declspec(novtable) ITimedTextSource : Windows::IInspectable
{
    virtual HRESULT __stdcall add_Resolved(Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedTextSource, Windows::Media::Core::TimedTextSourceResolveResultEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Resolved(event_token token) = 0;
};

struct __declspec(uuid("48907c9c-dcd8-4c33-9ad3-6cdce7b1c566")) __declspec(novtable) ITimedTextSourceResolveResultEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Error(Windows::Media::Core::ITimedMetadataTrackError ** value) = 0;
    virtual HRESULT __stdcall get_Tracks(Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack> ** value) = 0;
};

struct __declspec(uuid("7e311853-9aba-4ac4-bb98-2fb176c3bfdd")) __declspec(novtable) ITimedTextSourceStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFromStream(Windows::Storage::Streams::IRandomAccessStream * stream, Windows::Media::Core::ITimedTextSource ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFromUri(Windows::Foundation::IUriRuntimeClass * uri, Windows::Media::Core::ITimedTextSource ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFromStreamWithLanguage(Windows::Storage::Streams::IRandomAccessStream * stream, hstring defaultLanguage, Windows::Media::Core::ITimedTextSource ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFromUriWithLanguage(Windows::Foundation::IUriRuntimeClass * uri, hstring defaultLanguage, Windows::Media::Core::ITimedTextSource ** value) = 0;
};

struct __declspec(uuid("1bb2384d-a825-40c2-a7f5-281eaedf3b55")) __declspec(novtable) ITimedTextStyle : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall put_Name(hstring value) = 0;
    virtual HRESULT __stdcall get_FontFamily(hstring * value) = 0;
    virtual HRESULT __stdcall put_FontFamily(hstring value) = 0;
    virtual HRESULT __stdcall get_FontSize(Windows::Media::Core::TimedTextDouble * value) = 0;
    virtual HRESULT __stdcall put_FontSize(Windows::Media::Core::TimedTextDouble value) = 0;
    virtual HRESULT __stdcall get_FontWeight(winrt::Windows::Media::Core::TimedTextWeight * value) = 0;
    virtual HRESULT __stdcall put_FontWeight(winrt::Windows::Media::Core::TimedTextWeight value) = 0;
    virtual HRESULT __stdcall get_Foreground(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_Foreground(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_Background(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_Background(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_IsBackgroundAlwaysShown(bool * value) = 0;
    virtual HRESULT __stdcall put_IsBackgroundAlwaysShown(bool value) = 0;
    virtual HRESULT __stdcall get_FlowDirection(winrt::Windows::Media::Core::TimedTextFlowDirection * value) = 0;
    virtual HRESULT __stdcall put_FlowDirection(winrt::Windows::Media::Core::TimedTextFlowDirection value) = 0;
    virtual HRESULT __stdcall get_LineAlignment(winrt::Windows::Media::Core::TimedTextLineAlignment * value) = 0;
    virtual HRESULT __stdcall put_LineAlignment(winrt::Windows::Media::Core::TimedTextLineAlignment value) = 0;
    virtual HRESULT __stdcall get_OutlineColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_OutlineColor(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_OutlineThickness(Windows::Media::Core::TimedTextDouble * value) = 0;
    virtual HRESULT __stdcall put_OutlineThickness(Windows::Media::Core::TimedTextDouble value) = 0;
    virtual HRESULT __stdcall get_OutlineRadius(Windows::Media::Core::TimedTextDouble * value) = 0;
    virtual HRESULT __stdcall put_OutlineRadius(Windows::Media::Core::TimedTextDouble value) = 0;
};

struct __declspec(uuid("d713502f-3261-4722-a0c2-b937b2390f14")) __declspec(novtable) ITimedTextSubformat : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StartIndex(int32_t * value) = 0;
    virtual HRESULT __stdcall put_StartIndex(int32_t value) = 0;
    virtual HRESULT __stdcall get_Length(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Length(int32_t value) = 0;
    virtual HRESULT __stdcall get_SubformatStyle(Windows::Media::Core::ITimedTextStyle ** value) = 0;
    virtual HRESULT __stdcall put_SubformatStyle(Windows::Media::Core::ITimedTextStyle * value) = 0;
};

struct __declspec(uuid("0808a650-9698-4e57-877b-bd7cb2ee0f8a")) __declspec(novtable) IVideoStabilizationEffect : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Enabled(bool value) = 0;
    virtual HRESULT __stdcall get_Enabled(bool * value) = 0;
    virtual HRESULT __stdcall add_EnabledChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoStabilizationEffect, Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_EnabledChanged(event_token cookie) = 0;
    virtual HRESULT __stdcall abi_GetRecommendedStreamConfiguration(Windows::Media::Devices::IVideoDeviceController * controller, Windows::Media::MediaProperties::IVideoEncodingProperties * desiredProperties, Windows::Media::Capture::IVideoStreamConfiguration ** value) = 0;
};

struct __declspec(uuid("187eff28-67bb-4713-b900-4168da164529")) __declspec(novtable) IVideoStabilizationEffectEnabledChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Reason(winrt::Windows::Media::Core::VideoStabilizationEffectEnabledChangedReason * value) = 0;
};

struct __declspec(uuid("12ee0d55-9c2b-4440-8057-2c7a90f0cbec")) __declspec(novtable) IVideoStreamDescriptor : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EncodingProperties(Windows::Media::MediaProperties::IVideoEncodingProperties ** encodingProperties) = 0;
};

struct __declspec(uuid("494ef6d1-bb75-43d2-9e5e-7b79a3afced4")) __declspec(novtable) IVideoStreamDescriptorFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Media::MediaProperties::IVideoEncodingProperties * encodingProperties, Windows::Media::Core::IVideoStreamDescriptor ** result) = 0;
};

struct __declspec(uuid("99f3b7f3-e298-4396-bb6a-a51be6a2a20a")) __declspec(novtable) IVideoTrack : Windows::IInspectable
{
    virtual HRESULT __stdcall add_OpenFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoTrack, Windows::Media::Core::VideoTrackOpenFailedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_OpenFailed(event_token token) = 0;
    virtual HRESULT __stdcall abi_GetEncodingProperties(Windows::Media::MediaProperties::IVideoEncodingProperties ** value) = 0;
    virtual HRESULT __stdcall get_PlaybackItem(Windows::Media::Playback::IMediaPlaybackItem ** value) = 0;
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_SupportInfo(Windows::Media::Core::IVideoTrackSupportInfo ** value) = 0;
};

struct __declspec(uuid("7679e231-04f9-4c82-a4ee-8602c8bb4754")) __declspec(novtable) IVideoTrackOpenFailedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ExtendedError(HRESULT * value) = 0;
};

struct __declspec(uuid("4bb534a0-fc5f-450d-8ff0-778d590486de")) __declspec(novtable) IVideoTrackSupportInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DecoderStatus(winrt::Windows::Media::Core::MediaDecoderStatus * value) = 0;
    virtual HRESULT __stdcall get_MediaSourceStatus(winrt::Windows::Media::Core::MediaSourceStatus * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Media::Core::AudioStreamDescriptor> { using default_interface = Windows::Media::Core::IAudioStreamDescriptor; };
template <> struct traits<Windows::Media::Core::AudioTrack> { using default_interface = Windows::Media::Core::IMediaTrack; };
template <> struct traits<Windows::Media::Core::AudioTrackOpenFailedEventArgs> { using default_interface = Windows::Media::Core::IAudioTrackOpenFailedEventArgs; };
template <> struct traits<Windows::Media::Core::AudioTrackSupportInfo> { using default_interface = Windows::Media::Core::IAudioTrackSupportInfo; };
template <> struct traits<Windows::Media::Core::DataCue> { using default_interface = Windows::Media::Core::IDataCue; };
template <> struct traits<Windows::Media::Core::FaceDetectedEventArgs> { using default_interface = Windows::Media::Core::IFaceDetectedEventArgs; };
template <> struct traits<Windows::Media::Core::FaceDetectionEffect> { using default_interface = Windows::Media::Core::IFaceDetectionEffect; };
template <> struct traits<Windows::Media::Core::FaceDetectionEffectDefinition> { using default_interface = Windows::Media::Effects::IVideoEffectDefinition; };
template <> struct traits<Windows::Media::Core::FaceDetectionEffectFrame> { using default_interface = Windows::Media::Core::IFaceDetectionEffectFrame; };
template <> struct traits<Windows::Media::Core::HighDynamicRangeControl> { using default_interface = Windows::Media::Core::IHighDynamicRangeControl; };
template <> struct traits<Windows::Media::Core::HighDynamicRangeOutput> { using default_interface = Windows::Media::Core::IHighDynamicRangeOutput; };
template <> struct traits<Windows::Media::Core::MediaBinder> { using default_interface = Windows::Media::Core::IMediaBinder; };
template <> struct traits<Windows::Media::Core::MediaBindingEventArgs> { using default_interface = Windows::Media::Core::IMediaBindingEventArgs; };
template <> struct traits<Windows::Media::Core::MediaCueEventArgs> { using default_interface = Windows::Media::Core::IMediaCueEventArgs; };
template <> struct traits<Windows::Media::Core::MediaSource> { using default_interface = Windows::Media::Core::IMediaSource2; };
template <> struct traits<Windows::Media::Core::MediaSourceError> { using default_interface = Windows::Media::Core::IMediaSourceError; };
template <> struct traits<Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> { using default_interface = Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs; };
template <> struct traits<Windows::Media::Core::MediaSourceStateChangedEventArgs> { using default_interface = Windows::Media::Core::IMediaSourceStateChangedEventArgs; };
template <> struct traits<Windows::Media::Core::MediaStreamSample> { using default_interface = Windows::Media::Core::IMediaStreamSample; };
template <> struct traits<Windows::Media::Core::MediaStreamSamplePropertySet> { using default_interface = Windows::Foundation::Collections::IMap<GUID, Windows::IInspectable>; };
template <> struct traits<Windows::Media::Core::MediaStreamSampleProtectionProperties> { using default_interface = Windows::Media::Core::IMediaStreamSampleProtectionProperties; };
template <> struct traits<Windows::Media::Core::MediaStreamSource> { using default_interface = Windows::Media::Core::IMediaStreamSource; };
template <> struct traits<Windows::Media::Core::MediaStreamSourceClosedEventArgs> { using default_interface = Windows::Media::Core::IMediaStreamSourceClosedEventArgs; };
template <> struct traits<Windows::Media::Core::MediaStreamSourceClosedRequest> { using default_interface = Windows::Media::Core::IMediaStreamSourceClosedRequest; };
template <> struct traits<Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> { using default_interface = Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs; };
template <> struct traits<Windows::Media::Core::MediaStreamSourceSampleRequest> { using default_interface = Windows::Media::Core::IMediaStreamSourceSampleRequest; };
template <> struct traits<Windows::Media::Core::MediaStreamSourceSampleRequestDeferral> { using default_interface = Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral; };
template <> struct traits<Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> { using default_interface = Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs; };
template <> struct traits<Windows::Media::Core::MediaStreamSourceStartingEventArgs> { using default_interface = Windows::Media::Core::IMediaStreamSourceStartingEventArgs; };
template <> struct traits<Windows::Media::Core::MediaStreamSourceStartingRequest> { using default_interface = Windows::Media::Core::IMediaStreamSourceStartingRequest; };
template <> struct traits<Windows::Media::Core::MediaStreamSourceStartingRequestDeferral> { using default_interface = Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral; };
template <> struct traits<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest> { using default_interface = Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest; };
template <> struct traits<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral> { using default_interface = Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral; };
template <> struct traits<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> { using default_interface = Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs; };
template <> struct traits<Windows::Media::Core::MseSourceBuffer> { using default_interface = Windows::Media::Core::IMseSourceBuffer; };
template <> struct traits<Windows::Media::Core::MseSourceBufferList> { using default_interface = Windows::Media::Core::IMseSourceBufferList; };
template <> struct traits<Windows::Media::Core::MseStreamSource> { using default_interface = Windows::Media::Core::IMseStreamSource; };
template <> struct traits<Windows::Media::Core::SceneAnalysisEffect> { using default_interface = Windows::Media::Core::ISceneAnalysisEffect; };
template <> struct traits<Windows::Media::Core::SceneAnalysisEffectDefinition> { using default_interface = Windows::Media::Effects::IVideoEffectDefinition; };
template <> struct traits<Windows::Media::Core::SceneAnalysisEffectFrame> { using default_interface = Windows::Media::Core::ISceneAnalysisEffectFrame; };
template <> struct traits<Windows::Media::Core::SceneAnalyzedEventArgs> { using default_interface = Windows::Media::Core::ISceneAnalyzedEventArgs; };
template <> struct traits<Windows::Media::Core::TimedMetadataTrack> { using default_interface = Windows::Media::Core::ITimedMetadataTrack; };
template <> struct traits<Windows::Media::Core::TimedMetadataTrackError> { using default_interface = Windows::Media::Core::ITimedMetadataTrackError; };
template <> struct traits<Windows::Media::Core::TimedMetadataTrackFailedEventArgs> { using default_interface = Windows::Media::Core::ITimedMetadataTrackFailedEventArgs; };
template <> struct traits<Windows::Media::Core::TimedTextCue> { using default_interface = Windows::Media::Core::ITimedTextCue; };
template <> struct traits<Windows::Media::Core::TimedTextLine> { using default_interface = Windows::Media::Core::ITimedTextLine; };
template <> struct traits<Windows::Media::Core::TimedTextRegion> { using default_interface = Windows::Media::Core::ITimedTextRegion; };
template <> struct traits<Windows::Media::Core::TimedTextSource> { using default_interface = Windows::Media::Core::ITimedTextSource; };
template <> struct traits<Windows::Media::Core::TimedTextSourceResolveResultEventArgs> { using default_interface = Windows::Media::Core::ITimedTextSourceResolveResultEventArgs; };
template <> struct traits<Windows::Media::Core::TimedTextStyle> { using default_interface = Windows::Media::Core::ITimedTextStyle; };
template <> struct traits<Windows::Media::Core::TimedTextSubformat> { using default_interface = Windows::Media::Core::ITimedTextSubformat; };
template <> struct traits<Windows::Media::Core::VideoStabilizationEffect> { using default_interface = Windows::Media::Core::IVideoStabilizationEffect; };
template <> struct traits<Windows::Media::Core::VideoStabilizationEffectDefinition> { using default_interface = Windows::Media::Effects::IVideoEffectDefinition; };
template <> struct traits<Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> { using default_interface = Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs; };
template <> struct traits<Windows::Media::Core::VideoStreamDescriptor> { using default_interface = Windows::Media::Core::IVideoStreamDescriptor; };
template <> struct traits<Windows::Media::Core::VideoTrack> { using default_interface = Windows::Media::Core::IMediaTrack; };
template <> struct traits<Windows::Media::Core::VideoTrackOpenFailedEventArgs> { using default_interface = Windows::Media::Core::IVideoTrackOpenFailedEventArgs; };
template <> struct traits<Windows::Media::Core::VideoTrackSupportInfo> { using default_interface = Windows::Media::Core::IVideoTrackSupportInfo; };

}

namespace Windows::Media::Core {

template <typename T> struct impl_IAudioStreamDescriptor;
template <typename T> struct impl_IAudioStreamDescriptor2;
template <typename T> struct impl_IAudioStreamDescriptorFactory;
template <typename T> struct impl_IAudioTrack;
template <typename T> struct impl_IAudioTrackOpenFailedEventArgs;
template <typename T> struct impl_IAudioTrackSupportInfo;
template <typename T> struct impl_IDataCue;
template <typename T> struct impl_IFaceDetectedEventArgs;
template <typename T> struct impl_IFaceDetectionEffect;
template <typename T> struct impl_IFaceDetectionEffectDefinition;
template <typename T> struct impl_IFaceDetectionEffectFrame;
template <typename T> struct impl_IHighDynamicRangeControl;
template <typename T> struct impl_IHighDynamicRangeOutput;
template <typename T> struct impl_IMediaBinder;
template <typename T> struct impl_IMediaBindingEventArgs;
template <typename T> struct impl_IMediaCue;
template <typename T> struct impl_IMediaCueEventArgs;
template <typename T> struct impl_IMediaSource;
template <typename T> struct impl_IMediaSource2;
template <typename T> struct impl_IMediaSource3;
template <typename T> struct impl_IMediaSourceError;
template <typename T> struct impl_IMediaSourceOpenOperationCompletedEventArgs;
template <typename T> struct impl_IMediaSourceStateChangedEventArgs;
template <typename T> struct impl_IMediaSourceStatics;
template <typename T> struct impl_IMediaSourceStatics2;
template <typename T> struct impl_IMediaStreamDescriptor;
template <typename T> struct impl_IMediaStreamSample;
template <typename T> struct impl_IMediaStreamSampleProtectionProperties;
template <typename T> struct impl_IMediaStreamSampleStatics;
template <typename T> struct impl_IMediaStreamSource;
template <typename T> struct impl_IMediaStreamSource2;
template <typename T> struct impl_IMediaStreamSourceClosedEventArgs;
template <typename T> struct impl_IMediaStreamSourceClosedRequest;
template <typename T> struct impl_IMediaStreamSourceFactory;
template <typename T> struct impl_IMediaStreamSourceSampleRenderedEventArgs;
template <typename T> struct impl_IMediaStreamSourceSampleRequest;
template <typename T> struct impl_IMediaStreamSourceSampleRequestDeferral;
template <typename T> struct impl_IMediaStreamSourceSampleRequestedEventArgs;
template <typename T> struct impl_IMediaStreamSourceStartingEventArgs;
template <typename T> struct impl_IMediaStreamSourceStartingRequest;
template <typename T> struct impl_IMediaStreamSourceStartingRequestDeferral;
template <typename T> struct impl_IMediaStreamSourceSwitchStreamsRequest;
template <typename T> struct impl_IMediaStreamSourceSwitchStreamsRequestDeferral;
template <typename T> struct impl_IMediaStreamSourceSwitchStreamsRequestedEventArgs;
template <typename T> struct impl_IMediaTrack;
template <typename T> struct impl_IMseSourceBuffer;
template <typename T> struct impl_IMseSourceBufferList;
template <typename T> struct impl_IMseStreamSource;
template <typename T> struct impl_IMseStreamSourceStatics;
template <typename T> struct impl_ISceneAnalysisEffect;
template <typename T> struct impl_ISceneAnalysisEffectFrame;
template <typename T> struct impl_ISceneAnalyzedEventArgs;
template <typename T> struct impl_ISingleSelectMediaTrackList;
template <typename T> struct impl_ITimedMetadataTrack;
template <typename T> struct impl_ITimedMetadataTrack2;
template <typename T> struct impl_ITimedMetadataTrackError;
template <typename T> struct impl_ITimedMetadataTrackFactory;
template <typename T> struct impl_ITimedMetadataTrackFailedEventArgs;
template <typename T> struct impl_ITimedTextCue;
template <typename T> struct impl_ITimedTextLine;
template <typename T> struct impl_ITimedTextRegion;
template <typename T> struct impl_ITimedTextSource;
template <typename T> struct impl_ITimedTextSourceResolveResultEventArgs;
template <typename T> struct impl_ITimedTextSourceStatics;
template <typename T> struct impl_ITimedTextStyle;
template <typename T> struct impl_ITimedTextSubformat;
template <typename T> struct impl_IVideoStabilizationEffect;
template <typename T> struct impl_IVideoStabilizationEffectEnabledChangedEventArgs;
template <typename T> struct impl_IVideoStreamDescriptor;
template <typename T> struct impl_IVideoStreamDescriptorFactory;
template <typename T> struct impl_IVideoTrack;
template <typename T> struct impl_IVideoTrackOpenFailedEventArgs;
template <typename T> struct impl_IVideoTrackSupportInfo;

}

namespace impl {

template <> struct traits<Windows::Media::Core::IAudioStreamDescriptor>
{
    using abi = ABI::Windows::Media::Core::IAudioStreamDescriptor;
    template <typename D> using consume = Windows::Media::Core::impl_IAudioStreamDescriptor<D>;
};

template <> struct traits<Windows::Media::Core::IAudioStreamDescriptor2>
{
    using abi = ABI::Windows::Media::Core::IAudioStreamDescriptor2;
    template <typename D> using consume = Windows::Media::Core::impl_IAudioStreamDescriptor2<D>;
};

template <> struct traits<Windows::Media::Core::IAudioStreamDescriptorFactory>
{
    using abi = ABI::Windows::Media::Core::IAudioStreamDescriptorFactory;
    template <typename D> using consume = Windows::Media::Core::impl_IAudioStreamDescriptorFactory<D>;
};

template <> struct traits<Windows::Media::Core::IAudioTrack>
{
    using abi = ABI::Windows::Media::Core::IAudioTrack;
    template <typename D> using consume = Windows::Media::Core::impl_IAudioTrack<D>;
};

template <> struct traits<Windows::Media::Core::IAudioTrackOpenFailedEventArgs>
{
    using abi = ABI::Windows::Media::Core::IAudioTrackOpenFailedEventArgs;
    template <typename D> using consume = Windows::Media::Core::impl_IAudioTrackOpenFailedEventArgs<D>;
};

template <> struct traits<Windows::Media::Core::IAudioTrackSupportInfo>
{
    using abi = ABI::Windows::Media::Core::IAudioTrackSupportInfo;
    template <typename D> using consume = Windows::Media::Core::impl_IAudioTrackSupportInfo<D>;
};

template <> struct traits<Windows::Media::Core::IDataCue>
{
    using abi = ABI::Windows::Media::Core::IDataCue;
    template <typename D> using consume = Windows::Media::Core::impl_IDataCue<D>;
};

template <> struct traits<Windows::Media::Core::IFaceDetectedEventArgs>
{
    using abi = ABI::Windows::Media::Core::IFaceDetectedEventArgs;
    template <typename D> using consume = Windows::Media::Core::impl_IFaceDetectedEventArgs<D>;
};

template <> struct traits<Windows::Media::Core::IFaceDetectionEffect>
{
    using abi = ABI::Windows::Media::Core::IFaceDetectionEffect;
    template <typename D> using consume = Windows::Media::Core::impl_IFaceDetectionEffect<D>;
};

template <> struct traits<Windows::Media::Core::IFaceDetectionEffectDefinition>
{
    using abi = ABI::Windows::Media::Core::IFaceDetectionEffectDefinition;
    template <typename D> using consume = Windows::Media::Core::impl_IFaceDetectionEffectDefinition<D>;
};

template <> struct traits<Windows::Media::Core::IFaceDetectionEffectFrame>
{
    using abi = ABI::Windows::Media::Core::IFaceDetectionEffectFrame;
    template <typename D> using consume = Windows::Media::Core::impl_IFaceDetectionEffectFrame<D>;
};

template <> struct traits<Windows::Media::Core::IHighDynamicRangeControl>
{
    using abi = ABI::Windows::Media::Core::IHighDynamicRangeControl;
    template <typename D> using consume = Windows::Media::Core::impl_IHighDynamicRangeControl<D>;
};

template <> struct traits<Windows::Media::Core::IHighDynamicRangeOutput>
{
    using abi = ABI::Windows::Media::Core::IHighDynamicRangeOutput;
    template <typename D> using consume = Windows::Media::Core::impl_IHighDynamicRangeOutput<D>;
};

template <> struct traits<Windows::Media::Core::IMediaBinder>
{
    using abi = ABI::Windows::Media::Core::IMediaBinder;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaBinder<D>;
};

template <> struct traits<Windows::Media::Core::IMediaBindingEventArgs>
{
    using abi = ABI::Windows::Media::Core::IMediaBindingEventArgs;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaBindingEventArgs<D>;
};

template <> struct traits<Windows::Media::Core::IMediaCue>
{
    using abi = ABI::Windows::Media::Core::IMediaCue;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaCue<D>;
};

template <> struct traits<Windows::Media::Core::IMediaCueEventArgs>
{
    using abi = ABI::Windows::Media::Core::IMediaCueEventArgs;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaCueEventArgs<D>;
};

template <> struct traits<Windows::Media::Core::IMediaSource>
{
    using abi = ABI::Windows::Media::Core::IMediaSource;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaSource<D>;
};

template <> struct traits<Windows::Media::Core::IMediaSource2>
{
    using abi = ABI::Windows::Media::Core::IMediaSource2;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaSource2<D>;
};

template <> struct traits<Windows::Media::Core::IMediaSource3>
{
    using abi = ABI::Windows::Media::Core::IMediaSource3;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaSource3<D>;
};

template <> struct traits<Windows::Media::Core::IMediaSourceError>
{
    using abi = ABI::Windows::Media::Core::IMediaSourceError;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaSourceError<D>;
};

template <> struct traits<Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs>
{
    using abi = ABI::Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaSourceOpenOperationCompletedEventArgs<D>;
};

template <> struct traits<Windows::Media::Core::IMediaSourceStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Core::IMediaSourceStateChangedEventArgs;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaSourceStateChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::Core::IMediaSourceStatics>
{
    using abi = ABI::Windows::Media::Core::IMediaSourceStatics;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaSourceStatics<D>;
};

template <> struct traits<Windows::Media::Core::IMediaSourceStatics2>
{
    using abi = ABI::Windows::Media::Core::IMediaSourceStatics2;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaSourceStatics2<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamDescriptor>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamDescriptor;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamDescriptor<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSample>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSample;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSample<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSampleProtectionProperties>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSampleProtectionProperties;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSampleProtectionProperties<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSampleStatics>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSampleStatics;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSampleStatics<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSource>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSource;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSource<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSource2>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSource2;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSource2<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSourceClosedEventArgs>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSourceClosedEventArgs;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSourceClosedEventArgs<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSourceClosedRequest>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSourceClosedRequest;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSourceClosedRequest<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSourceFactory>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSourceFactory;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSourceFactory<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSourceSampleRenderedEventArgs<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSourceSampleRequest>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSourceSampleRequest;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSourceSampleRequest<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSourceSampleRequestDeferral<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSourceSampleRequestedEventArgs<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSourceStartingEventArgs>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSourceStartingEventArgs;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSourceStartingEventArgs<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSourceStartingRequest>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSourceStartingRequest;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSourceStartingRequest<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSourceStartingRequestDeferral<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSourceSwitchStreamsRequest<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSourceSwitchStreamsRequestDeferral<D>;
};

template <> struct traits<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs>
{
    using abi = ABI::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaStreamSourceSwitchStreamsRequestedEventArgs<D>;
};

template <> struct traits<Windows::Media::Core::IMediaTrack>
{
    using abi = ABI::Windows::Media::Core::IMediaTrack;
    template <typename D> using consume = Windows::Media::Core::impl_IMediaTrack<D>;
};

template <> struct traits<Windows::Media::Core::IMseSourceBuffer>
{
    using abi = ABI::Windows::Media::Core::IMseSourceBuffer;
    template <typename D> using consume = Windows::Media::Core::impl_IMseSourceBuffer<D>;
};

template <> struct traits<Windows::Media::Core::IMseSourceBufferList>
{
    using abi = ABI::Windows::Media::Core::IMseSourceBufferList;
    template <typename D> using consume = Windows::Media::Core::impl_IMseSourceBufferList<D>;
};

template <> struct traits<Windows::Media::Core::IMseStreamSource>
{
    using abi = ABI::Windows::Media::Core::IMseStreamSource;
    template <typename D> using consume = Windows::Media::Core::impl_IMseStreamSource<D>;
};

template <> struct traits<Windows::Media::Core::IMseStreamSourceStatics>
{
    using abi = ABI::Windows::Media::Core::IMseStreamSourceStatics;
    template <typename D> using consume = Windows::Media::Core::impl_IMseStreamSourceStatics<D>;
};

template <> struct traits<Windows::Media::Core::ISceneAnalysisEffect>
{
    using abi = ABI::Windows::Media::Core::ISceneAnalysisEffect;
    template <typename D> using consume = Windows::Media::Core::impl_ISceneAnalysisEffect<D>;
};

template <> struct traits<Windows::Media::Core::ISceneAnalysisEffectFrame>
{
    using abi = ABI::Windows::Media::Core::ISceneAnalysisEffectFrame;
    template <typename D> using consume = Windows::Media::Core::impl_ISceneAnalysisEffectFrame<D>;
};

template <> struct traits<Windows::Media::Core::ISceneAnalyzedEventArgs>
{
    using abi = ABI::Windows::Media::Core::ISceneAnalyzedEventArgs;
    template <typename D> using consume = Windows::Media::Core::impl_ISceneAnalyzedEventArgs<D>;
};

template <> struct traits<Windows::Media::Core::ISingleSelectMediaTrackList>
{
    using abi = ABI::Windows::Media::Core::ISingleSelectMediaTrackList;
    template <typename D> using consume = Windows::Media::Core::impl_ISingleSelectMediaTrackList<D>;
};

template <> struct traits<Windows::Media::Core::ITimedMetadataTrack>
{
    using abi = ABI::Windows::Media::Core::ITimedMetadataTrack;
    template <typename D> using consume = Windows::Media::Core::impl_ITimedMetadataTrack<D>;
};

template <> struct traits<Windows::Media::Core::ITimedMetadataTrack2>
{
    using abi = ABI::Windows::Media::Core::ITimedMetadataTrack2;
    template <typename D> using consume = Windows::Media::Core::impl_ITimedMetadataTrack2<D>;
};

template <> struct traits<Windows::Media::Core::ITimedMetadataTrackError>
{
    using abi = ABI::Windows::Media::Core::ITimedMetadataTrackError;
    template <typename D> using consume = Windows::Media::Core::impl_ITimedMetadataTrackError<D>;
};

template <> struct traits<Windows::Media::Core::ITimedMetadataTrackFactory>
{
    using abi = ABI::Windows::Media::Core::ITimedMetadataTrackFactory;
    template <typename D> using consume = Windows::Media::Core::impl_ITimedMetadataTrackFactory<D>;
};

template <> struct traits<Windows::Media::Core::ITimedMetadataTrackFailedEventArgs>
{
    using abi = ABI::Windows::Media::Core::ITimedMetadataTrackFailedEventArgs;
    template <typename D> using consume = Windows::Media::Core::impl_ITimedMetadataTrackFailedEventArgs<D>;
};

template <> struct traits<Windows::Media::Core::ITimedTextCue>
{
    using abi = ABI::Windows::Media::Core::ITimedTextCue;
    template <typename D> using consume = Windows::Media::Core::impl_ITimedTextCue<D>;
};

template <> struct traits<Windows::Media::Core::ITimedTextLine>
{
    using abi = ABI::Windows::Media::Core::ITimedTextLine;
    template <typename D> using consume = Windows::Media::Core::impl_ITimedTextLine<D>;
};

template <> struct traits<Windows::Media::Core::ITimedTextRegion>
{
    using abi = ABI::Windows::Media::Core::ITimedTextRegion;
    template <typename D> using consume = Windows::Media::Core::impl_ITimedTextRegion<D>;
};

template <> struct traits<Windows::Media::Core::ITimedTextSource>
{
    using abi = ABI::Windows::Media::Core::ITimedTextSource;
    template <typename D> using consume = Windows::Media::Core::impl_ITimedTextSource<D>;
};

template <> struct traits<Windows::Media::Core::ITimedTextSourceResolveResultEventArgs>
{
    using abi = ABI::Windows::Media::Core::ITimedTextSourceResolveResultEventArgs;
    template <typename D> using consume = Windows::Media::Core::impl_ITimedTextSourceResolveResultEventArgs<D>;
};

template <> struct traits<Windows::Media::Core::ITimedTextSourceStatics>
{
    using abi = ABI::Windows::Media::Core::ITimedTextSourceStatics;
    template <typename D> using consume = Windows::Media::Core::impl_ITimedTextSourceStatics<D>;
};

template <> struct traits<Windows::Media::Core::ITimedTextStyle>
{
    using abi = ABI::Windows::Media::Core::ITimedTextStyle;
    template <typename D> using consume = Windows::Media::Core::impl_ITimedTextStyle<D>;
};

template <> struct traits<Windows::Media::Core::ITimedTextSubformat>
{
    using abi = ABI::Windows::Media::Core::ITimedTextSubformat;
    template <typename D> using consume = Windows::Media::Core::impl_ITimedTextSubformat<D>;
};

template <> struct traits<Windows::Media::Core::IVideoStabilizationEffect>
{
    using abi = ABI::Windows::Media::Core::IVideoStabilizationEffect;
    template <typename D> using consume = Windows::Media::Core::impl_IVideoStabilizationEffect<D>;
};

template <> struct traits<Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs>
{
    using abi = ABI::Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs;
    template <typename D> using consume = Windows::Media::Core::impl_IVideoStabilizationEffectEnabledChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::Core::IVideoStreamDescriptor>
{
    using abi = ABI::Windows::Media::Core::IVideoStreamDescriptor;
    template <typename D> using consume = Windows::Media::Core::impl_IVideoStreamDescriptor<D>;
};

template <> struct traits<Windows::Media::Core::IVideoStreamDescriptorFactory>
{
    using abi = ABI::Windows::Media::Core::IVideoStreamDescriptorFactory;
    template <typename D> using consume = Windows::Media::Core::impl_IVideoStreamDescriptorFactory<D>;
};

template <> struct traits<Windows::Media::Core::IVideoTrack>
{
    using abi = ABI::Windows::Media::Core::IVideoTrack;
    template <typename D> using consume = Windows::Media::Core::impl_IVideoTrack<D>;
};

template <> struct traits<Windows::Media::Core::IVideoTrackOpenFailedEventArgs>
{
    using abi = ABI::Windows::Media::Core::IVideoTrackOpenFailedEventArgs;
    template <typename D> using consume = Windows::Media::Core::impl_IVideoTrackOpenFailedEventArgs<D>;
};

template <> struct traits<Windows::Media::Core::IVideoTrackSupportInfo>
{
    using abi = ABI::Windows::Media::Core::IVideoTrackSupportInfo;
    template <typename D> using consume = Windows::Media::Core::impl_IVideoTrackSupportInfo<D>;
};

template <> struct traits<Windows::Media::Core::AudioStreamDescriptor>
{
    using abi = ABI::Windows::Media::Core::AudioStreamDescriptor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.AudioStreamDescriptor"; }
};

template <> struct traits<Windows::Media::Core::AudioTrack>
{
    using abi = ABI::Windows::Media::Core::AudioTrack;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.AudioTrack"; }
};

template <> struct traits<Windows::Media::Core::AudioTrackOpenFailedEventArgs>
{
    using abi = ABI::Windows::Media::Core::AudioTrackOpenFailedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.AudioTrackOpenFailedEventArgs"; }
};

template <> struct traits<Windows::Media::Core::AudioTrackSupportInfo>
{
    using abi = ABI::Windows::Media::Core::AudioTrackSupportInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.AudioTrackSupportInfo"; }
};

template <> struct traits<Windows::Media::Core::DataCue>
{
    using abi = ABI::Windows::Media::Core::DataCue;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.DataCue"; }
};

template <> struct traits<Windows::Media::Core::FaceDetectedEventArgs>
{
    using abi = ABI::Windows::Media::Core::FaceDetectedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.FaceDetectedEventArgs"; }
};

template <> struct traits<Windows::Media::Core::FaceDetectionEffect>
{
    using abi = ABI::Windows::Media::Core::FaceDetectionEffect;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.FaceDetectionEffect"; }
};

template <> struct traits<Windows::Media::Core::FaceDetectionEffectDefinition>
{
    using abi = ABI::Windows::Media::Core::FaceDetectionEffectDefinition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.FaceDetectionEffectDefinition"; }
};

template <> struct traits<Windows::Media::Core::FaceDetectionEffectFrame>
{
    using abi = ABI::Windows::Media::Core::FaceDetectionEffectFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.FaceDetectionEffectFrame"; }
};

template <> struct traits<Windows::Media::Core::HighDynamicRangeControl>
{
    using abi = ABI::Windows::Media::Core::HighDynamicRangeControl;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.HighDynamicRangeControl"; }
};

template <> struct traits<Windows::Media::Core::HighDynamicRangeOutput>
{
    using abi = ABI::Windows::Media::Core::HighDynamicRangeOutput;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.HighDynamicRangeOutput"; }
};

template <> struct traits<Windows::Media::Core::MediaBinder>
{
    using abi = ABI::Windows::Media::Core::MediaBinder;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaBinder"; }
};

template <> struct traits<Windows::Media::Core::MediaBindingEventArgs>
{
    using abi = ABI::Windows::Media::Core::MediaBindingEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaBindingEventArgs"; }
};

template <> struct traits<Windows::Media::Core::MediaCueEventArgs>
{
    using abi = ABI::Windows::Media::Core::MediaCueEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaCueEventArgs"; }
};

template <> struct traits<Windows::Media::Core::MediaSource>
{
    using abi = ABI::Windows::Media::Core::MediaSource;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaSource"; }
};

template <> struct traits<Windows::Media::Core::MediaSourceError>
{
    using abi = ABI::Windows::Media::Core::MediaSourceError;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaSourceError"; }
};

template <> struct traits<Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs>
{
    using abi = ABI::Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaSourceOpenOperationCompletedEventArgs"; }
};

template <> struct traits<Windows::Media::Core::MediaSourceStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Core::MediaSourceStateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaSourceStateChangedEventArgs"; }
};

template <> struct traits<Windows::Media::Core::MediaStreamSample>
{
    using abi = ABI::Windows::Media::Core::MediaStreamSample;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaStreamSample"; }
};

template <> struct traits<Windows::Media::Core::MediaStreamSamplePropertySet>
{
    using abi = ABI::Windows::Media::Core::MediaStreamSamplePropertySet;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaStreamSamplePropertySet"; }
};

template <> struct traits<Windows::Media::Core::MediaStreamSampleProtectionProperties>
{
    using abi = ABI::Windows::Media::Core::MediaStreamSampleProtectionProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaStreamSampleProtectionProperties"; }
};

template <> struct traits<Windows::Media::Core::MediaStreamSource>
{
    using abi = ABI::Windows::Media::Core::MediaStreamSource;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaStreamSource"; }
};

template <> struct traits<Windows::Media::Core::MediaStreamSourceClosedEventArgs>
{
    using abi = ABI::Windows::Media::Core::MediaStreamSourceClosedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaStreamSourceClosedEventArgs"; }
};

template <> struct traits<Windows::Media::Core::MediaStreamSourceClosedRequest>
{
    using abi = ABI::Windows::Media::Core::MediaStreamSourceClosedRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaStreamSourceClosedRequest"; }
};

template <> struct traits<Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs>
{
    using abi = ABI::Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaStreamSourceSampleRenderedEventArgs"; }
};

template <> struct traits<Windows::Media::Core::MediaStreamSourceSampleRequest>
{
    using abi = ABI::Windows::Media::Core::MediaStreamSourceSampleRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaStreamSourceSampleRequest"; }
};

template <> struct traits<Windows::Media::Core::MediaStreamSourceSampleRequestDeferral>
{
    using abi = ABI::Windows::Media::Core::MediaStreamSourceSampleRequestDeferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaStreamSourceSampleRequestDeferral"; }
};

template <> struct traits<Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs>
{
    using abi = ABI::Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaStreamSourceSampleRequestedEventArgs"; }
};

template <> struct traits<Windows::Media::Core::MediaStreamSourceStartingEventArgs>
{
    using abi = ABI::Windows::Media::Core::MediaStreamSourceStartingEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaStreamSourceStartingEventArgs"; }
};

template <> struct traits<Windows::Media::Core::MediaStreamSourceStartingRequest>
{
    using abi = ABI::Windows::Media::Core::MediaStreamSourceStartingRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaStreamSourceStartingRequest"; }
};

template <> struct traits<Windows::Media::Core::MediaStreamSourceStartingRequestDeferral>
{
    using abi = ABI::Windows::Media::Core::MediaStreamSourceStartingRequestDeferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaStreamSourceStartingRequestDeferral"; }
};

template <> struct traits<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest>
{
    using abi = ABI::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaStreamSourceSwitchStreamsRequest"; }
};

template <> struct traits<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral>
{
    using abi = ABI::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaStreamSourceSwitchStreamsRequestDeferral"; }
};

template <> struct traits<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs>
{
    using abi = ABI::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MediaStreamSourceSwitchStreamsRequestedEventArgs"; }
};

template <> struct traits<Windows::Media::Core::MseSourceBuffer>
{
    using abi = ABI::Windows::Media::Core::MseSourceBuffer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MseSourceBuffer"; }
};

template <> struct traits<Windows::Media::Core::MseSourceBufferList>
{
    using abi = ABI::Windows::Media::Core::MseSourceBufferList;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MseSourceBufferList"; }
};

template <> struct traits<Windows::Media::Core::MseStreamSource>
{
    using abi = ABI::Windows::Media::Core::MseStreamSource;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.MseStreamSource"; }
};

template <> struct traits<Windows::Media::Core::SceneAnalysisEffect>
{
    using abi = ABI::Windows::Media::Core::SceneAnalysisEffect;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.SceneAnalysisEffect"; }
};

template <> struct traits<Windows::Media::Core::SceneAnalysisEffectDefinition>
{
    using abi = ABI::Windows::Media::Core::SceneAnalysisEffectDefinition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.SceneAnalysisEffectDefinition"; }
};

template <> struct traits<Windows::Media::Core::SceneAnalysisEffectFrame>
{
    using abi = ABI::Windows::Media::Core::SceneAnalysisEffectFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.SceneAnalysisEffectFrame"; }
};

template <> struct traits<Windows::Media::Core::SceneAnalyzedEventArgs>
{
    using abi = ABI::Windows::Media::Core::SceneAnalyzedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.SceneAnalyzedEventArgs"; }
};

template <> struct traits<Windows::Media::Core::TimedMetadataTrack>
{
    using abi = ABI::Windows::Media::Core::TimedMetadataTrack;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.TimedMetadataTrack"; }
};

template <> struct traits<Windows::Media::Core::TimedMetadataTrackError>
{
    using abi = ABI::Windows::Media::Core::TimedMetadataTrackError;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.TimedMetadataTrackError"; }
};

template <> struct traits<Windows::Media::Core::TimedMetadataTrackFailedEventArgs>
{
    using abi = ABI::Windows::Media::Core::TimedMetadataTrackFailedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.TimedMetadataTrackFailedEventArgs"; }
};

template <> struct traits<Windows::Media::Core::TimedTextCue>
{
    using abi = ABI::Windows::Media::Core::TimedTextCue;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.TimedTextCue"; }
};

template <> struct traits<Windows::Media::Core::TimedTextLine>
{
    using abi = ABI::Windows::Media::Core::TimedTextLine;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.TimedTextLine"; }
};

template <> struct traits<Windows::Media::Core::TimedTextRegion>
{
    using abi = ABI::Windows::Media::Core::TimedTextRegion;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.TimedTextRegion"; }
};

template <> struct traits<Windows::Media::Core::TimedTextSource>
{
    using abi = ABI::Windows::Media::Core::TimedTextSource;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.TimedTextSource"; }
};

template <> struct traits<Windows::Media::Core::TimedTextSourceResolveResultEventArgs>
{
    using abi = ABI::Windows::Media::Core::TimedTextSourceResolveResultEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.TimedTextSourceResolveResultEventArgs"; }
};

template <> struct traits<Windows::Media::Core::TimedTextStyle>
{
    using abi = ABI::Windows::Media::Core::TimedTextStyle;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.TimedTextStyle"; }
};

template <> struct traits<Windows::Media::Core::TimedTextSubformat>
{
    using abi = ABI::Windows::Media::Core::TimedTextSubformat;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.TimedTextSubformat"; }
};

template <> struct traits<Windows::Media::Core::VideoStabilizationEffect>
{
    using abi = ABI::Windows::Media::Core::VideoStabilizationEffect;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.VideoStabilizationEffect"; }
};

template <> struct traits<Windows::Media::Core::VideoStabilizationEffectDefinition>
{
    using abi = ABI::Windows::Media::Core::VideoStabilizationEffectDefinition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.VideoStabilizationEffectDefinition"; }
};

template <> struct traits<Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs>
{
    using abi = ABI::Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.VideoStabilizationEffectEnabledChangedEventArgs"; }
};

template <> struct traits<Windows::Media::Core::VideoStreamDescriptor>
{
    using abi = ABI::Windows::Media::Core::VideoStreamDescriptor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.VideoStreamDescriptor"; }
};

template <> struct traits<Windows::Media::Core::VideoTrack>
{
    using abi = ABI::Windows::Media::Core::VideoTrack;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.VideoTrack"; }
};

template <> struct traits<Windows::Media::Core::VideoTrackOpenFailedEventArgs>
{
    using abi = ABI::Windows::Media::Core::VideoTrackOpenFailedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.VideoTrackOpenFailedEventArgs"; }
};

template <> struct traits<Windows::Media::Core::VideoTrackSupportInfo>
{
    using abi = ABI::Windows::Media::Core::VideoTrackSupportInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Core.VideoTrackSupportInfo"; }
};

}

}
