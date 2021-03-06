// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.Input.Spatial.0.h"
#include "Windows.Perception.0.h"
#include "Windows.Perception.People.0.h"
#include "Windows.Perception.Spatial.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Input::Spatial {

struct __declspec(uuid("71605bcc-0c35-4673-adbd-cc04caa6ef45")) __declspec(novtable) ISpatialGestureRecognizer : Windows::IInspectable
{
    virtual HRESULT __stdcall add_RecognitionStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_RecognitionStarted(event_token token) = 0;
    virtual HRESULT __stdcall add_RecognitionEnded(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_RecognitionEnded(event_token token) = 0;
    virtual HRESULT __stdcall add_Tapped(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialTappedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Tapped(event_token token) = 0;
    virtual HRESULT __stdcall add_HoldStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_HoldStarted(event_token token) = 0;
    virtual HRESULT __stdcall add_HoldCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_HoldCompleted(event_token token) = 0;
    virtual HRESULT __stdcall add_HoldCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_HoldCanceled(event_token token) = 0;
    virtual HRESULT __stdcall add_ManipulationStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ManipulationStarted(event_token token) = 0;
    virtual HRESULT __stdcall add_ManipulationUpdated(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ManipulationUpdated(event_token token) = 0;
    virtual HRESULT __stdcall add_ManipulationCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ManipulationCompleted(event_token token) = 0;
    virtual HRESULT __stdcall add_ManipulationCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ManipulationCanceled(event_token token) = 0;
    virtual HRESULT __stdcall add_NavigationStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_NavigationStarted(event_token token) = 0;
    virtual HRESULT __stdcall add_NavigationUpdated(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_NavigationUpdated(event_token token) = 0;
    virtual HRESULT __stdcall add_NavigationCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_NavigationCompleted(event_token token) = 0;
    virtual HRESULT __stdcall add_NavigationCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_NavigationCanceled(event_token token) = 0;
    virtual HRESULT __stdcall abi_CaptureInteraction(Windows::UI::Input::Spatial::ISpatialInteraction * interaction) = 0;
    virtual HRESULT __stdcall abi_CancelPendingGestures() = 0;
    virtual HRESULT __stdcall abi_TrySetGestureSettings(winrt::Windows::UI::Input::Spatial::SpatialGestureSettings settings, bool * succeeded) = 0;
    virtual HRESULT __stdcall get_GestureSettings(winrt::Windows::UI::Input::Spatial::SpatialGestureSettings * value) = 0;
};

struct __declspec(uuid("77214186-57b9-3150-8382-698b24e264d0")) __declspec(novtable) ISpatialGestureRecognizerFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(winrt::Windows::UI::Input::Spatial::SpatialGestureSettings settings, Windows::UI::Input::Spatial::ISpatialGestureRecognizer ** value) = 0;
};

struct __declspec(uuid("5dfcb667-4caa-4093-8c35-b601a839f31b")) __declspec(novtable) ISpatialHoldCanceledEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InteractionSourceKind(winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) = 0;
};

struct __declspec(uuid("3f64470b-4cfd-43da-8dc4-e64552173971")) __declspec(novtable) ISpatialHoldCompletedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InteractionSourceKind(winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) = 0;
};

struct __declspec(uuid("8e343d79-acb6-4144-8615-2cfba8a3cb3f")) __declspec(novtable) ISpatialHoldStartedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InteractionSourceKind(winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) = 0;
    virtual HRESULT __stdcall abi_TryGetPointerPose(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::UI::Input::Spatial::ISpatialPointerPose ** value) = 0;
};

struct __declspec(uuid("fc967639-88e6-4646-9112-4344aaec9dfa")) __declspec(novtable) ISpatialInteraction : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SourceState(Windows::UI::Input::Spatial::ISpatialInteractionSourceState ** value) = 0;
};

struct __declspec(uuid("075878e4-5961-3b41-9dfb-cea5d89cc38a")) __declspec(novtable) ISpatialInteractionDetectedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InteractionSourceKind(winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) = 0;
    virtual HRESULT __stdcall abi_TryGetPointerPose(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::UI::Input::Spatial::ISpatialPointerPose ** value) = 0;
    virtual HRESULT __stdcall get_Interaction(Windows::UI::Input::Spatial::ISpatialInteraction ** value) = 0;
};

struct __declspec(uuid("32a64ea8-a15a-3995-b8bd-80513cb5adef")) __declspec(novtable) ISpatialInteractionManager : Windows::IInspectable
{
    virtual HRESULT __stdcall add_SourceDetected(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SourceDetected(event_token token) = 0;
    virtual HRESULT __stdcall add_SourceLost(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SourceLost(event_token token) = 0;
    virtual HRESULT __stdcall add_SourceUpdated(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SourceUpdated(event_token token) = 0;
    virtual HRESULT __stdcall add_SourcePressed(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SourcePressed(event_token token) = 0;
    virtual HRESULT __stdcall add_SourceReleased(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SourceReleased(event_token token) = 0;
    virtual HRESULT __stdcall add_InteractionDetected(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_InteractionDetected(event_token token) = 0;
    virtual HRESULT __stdcall abi_GetDetectedSourcesAtTimestamp(Windows::Perception::IPerceptionTimestamp * timeStamp, Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Spatial::SpatialInteractionSourceState> ** value) = 0;
};

struct __declspec(uuid("00e31fa6-8ca2-30bf-91fe-d9cb4a008990")) __declspec(novtable) ISpatialInteractionManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::UI::Input::Spatial::ISpatialInteractionManager ** value) = 0;
};

struct __declspec(uuid("fb5433ba-b0b3-3148-9f3b-e9f5de568f5d")) __declspec(novtable) ISpatialInteractionSource : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Kind(winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) = 0;
};

struct __declspec(uuid("23b786cf-ec23-3979-b27c-eb0e12feb7c7")) __declspec(novtable) ISpatialInteractionSourceEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_State(Windows::UI::Input::Spatial::ISpatialInteractionSourceState ** value) = 0;
};

struct __declspec(uuid("ea4696c4-7e8b-30ca-bcc5-c77189cea30a")) __declspec(novtable) ISpatialInteractionSourceLocation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Position(Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> ** value) = 0;
    virtual HRESULT __stdcall get_Velocity(Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> ** value) = 0;
};

struct __declspec(uuid("4c671045-3917-40fc-a9ac-31c9cf5ff91b")) __declspec(novtable) ISpatialInteractionSourceLocation2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Orientation(Windows::Foundation::IReference<Windows::Foundation::Numerics::quaternion> ** value) = 0;
};

struct __declspec(uuid("05604542-3ef7-3222-9f53-63c9cb7e3bc7")) __declspec(novtable) ISpatialInteractionSourceProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TryGetSourceLossMitigationDirection(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> ** value) = 0;
    virtual HRESULT __stdcall get_SourceLossRisk(double * value) = 0;
    virtual HRESULT __stdcall abi_TryGetLocation(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation ** value) = 0;
};

struct __declspec(uuid("d5c475ef-4b63-37ec-98b9-9fc652b9d2f2")) __declspec(novtable) ISpatialInteractionSourceState : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Source(Windows::UI::Input::Spatial::ISpatialInteractionSource ** value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties ** value) = 0;
    virtual HRESULT __stdcall get_IsPressed(bool * value) = 0;
    virtual HRESULT __stdcall get_Timestamp(Windows::Perception::IPerceptionTimestamp ** value) = 0;
    virtual HRESULT __stdcall abi_TryGetPointerPose(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::UI::Input::Spatial::ISpatialPointerPose ** value) = 0;
};

struct __declspec(uuid("2d40d1cb-e7da-4220-b0bf-819301674780")) __declspec(novtable) ISpatialManipulationCanceledEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InteractionSourceKind(winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) = 0;
};

struct __declspec(uuid("05086802-f301-4343-9250-2fbaa5f87a37")) __declspec(novtable) ISpatialManipulationCompletedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InteractionSourceKind(winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) = 0;
    virtual HRESULT __stdcall abi_TryGetCumulativeDelta(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::UI::Input::Spatial::ISpatialManipulationDelta ** value) = 0;
};

struct __declspec(uuid("a7ec967a-d123-3a81-a15b-992923dcbe91")) __declspec(novtable) ISpatialManipulationDelta : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Translation(Windows::Foundation::Numerics::float3 * value) = 0;
};

struct __declspec(uuid("a1d6bbce-42a5-377b-ada6-d28e3d384737")) __declspec(novtable) ISpatialManipulationStartedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InteractionSourceKind(winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) = 0;
    virtual HRESULT __stdcall abi_TryGetPointerPose(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::UI::Input::Spatial::ISpatialPointerPose ** value) = 0;
};

struct __declspec(uuid("5f230b9b-60c6-4dc6-bdc9-9f4a6f15fe49")) __declspec(novtable) ISpatialManipulationUpdatedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InteractionSourceKind(winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) = 0;
    virtual HRESULT __stdcall abi_TryGetCumulativeDelta(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::UI::Input::Spatial::ISpatialManipulationDelta ** value) = 0;
};

struct __declspec(uuid("ce503edc-e8a5-46f0-92d4-3c122b35112a")) __declspec(novtable) ISpatialNavigationCanceledEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InteractionSourceKind(winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) = 0;
};

struct __declspec(uuid("012e80b7-af3b-42c2-9e41-baaa0e721f3a")) __declspec(novtable) ISpatialNavigationCompletedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InteractionSourceKind(winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) = 0;
    virtual HRESULT __stdcall get_NormalizedOffset(Windows::Foundation::Numerics::float3 * value) = 0;
};

struct __declspec(uuid("754a348a-fb64-4656-8ebd-9deecaafe475")) __declspec(novtable) ISpatialNavigationStartedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InteractionSourceKind(winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) = 0;
    virtual HRESULT __stdcall abi_TryGetPointerPose(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::UI::Input::Spatial::ISpatialPointerPose ** value) = 0;
    virtual HRESULT __stdcall get_IsNavigatingX(bool * value) = 0;
    virtual HRESULT __stdcall get_IsNavigatingY(bool * value) = 0;
    virtual HRESULT __stdcall get_IsNavigatingZ(bool * value) = 0;
};

struct __declspec(uuid("9b713fd7-839d-4a74-8732-45466fc044b5")) __declspec(novtable) ISpatialNavigationUpdatedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InteractionSourceKind(winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) = 0;
    virtual HRESULT __stdcall get_NormalizedOffset(Windows::Foundation::Numerics::float3 * value) = 0;
};

struct __declspec(uuid("6953a42e-c17e-357d-97a1-7269d0ed2d10")) __declspec(novtable) ISpatialPointerPose : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(Windows::Perception::IPerceptionTimestamp ** value) = 0;
    virtual HRESULT __stdcall get_Head(Windows::Perception::People::IHeadPose ** value) = 0;
};

struct __declspec(uuid("a25591a9-aca1-3ee0-9816-785cfb2e3fb8")) __declspec(novtable) ISpatialPointerPoseStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TryGetAtTimestamp(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::Perception::IPerceptionTimestamp * timestamp, Windows::UI::Input::Spatial::ISpatialPointerPose ** value) = 0;
};

struct __declspec(uuid("0e35f5cb-3f75-43f3-ac81-d1dc2df9b1fb")) __declspec(novtable) ISpatialRecognitionEndedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InteractionSourceKind(winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) = 0;
};

struct __declspec(uuid("24da128f-0008-4a6d-aa50-2a76f9cfb264")) __declspec(novtable) ISpatialRecognitionStartedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InteractionSourceKind(winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) = 0;
    virtual HRESULT __stdcall abi_TryGetPointerPose(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::UI::Input::Spatial::ISpatialPointerPose ** value) = 0;
    virtual HRESULT __stdcall abi_IsGesturePossible(winrt::Windows::UI::Input::Spatial::SpatialGestureSettings gesture, bool * value) = 0;
};

struct __declspec(uuid("296d83de-f444-4aa1-b2bf-9dc88d567da6")) __declspec(novtable) ISpatialTappedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InteractionSourceKind(winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind * value) = 0;
    virtual HRESULT __stdcall abi_TryGetPointerPose(Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem, Windows::UI::Input::Spatial::ISpatialPointerPose ** value) = 0;
    virtual HRESULT __stdcall get_TapCount(uint32_t * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::Input::Spatial::SpatialGestureRecognizer> { using default_interface = Windows::UI::Input::Spatial::ISpatialGestureRecognizer; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs> { using default_interface = Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs> { using default_interface = Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs> { using default_interface = Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialInteraction> { using default_interface = Windows::UI::Input::Spatial::ISpatialInteraction; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs> { using default_interface = Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialInteractionManager> { using default_interface = Windows::UI::Input::Spatial::ISpatialInteractionManager; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialInteractionSource> { using default_interface = Windows::UI::Input::Spatial::ISpatialInteractionSource; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> { using default_interface = Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialInteractionSourceLocation> { using default_interface = Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialInteractionSourceProperties> { using default_interface = Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialInteractionSourceState> { using default_interface = Windows::UI::Input::Spatial::ISpatialInteractionSourceState; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs> { using default_interface = Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs> { using default_interface = Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialManipulationDelta> { using default_interface = Windows::UI::Input::Spatial::ISpatialManipulationDelta; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs> { using default_interface = Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs> { using default_interface = Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs> { using default_interface = Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs> { using default_interface = Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs> { using default_interface = Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs> { using default_interface = Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialPointerPose> { using default_interface = Windows::UI::Input::Spatial::ISpatialPointerPose; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs> { using default_interface = Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs> { using default_interface = Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs; };
template <> struct traits<Windows::UI::Input::Spatial::SpatialTappedEventArgs> { using default_interface = Windows::UI::Input::Spatial::ISpatialTappedEventArgs; };

}

namespace Windows::UI::Input::Spatial {

template <typename T> struct impl_ISpatialGestureRecognizer;
template <typename T> struct impl_ISpatialGestureRecognizerFactory;
template <typename T> struct impl_ISpatialHoldCanceledEventArgs;
template <typename T> struct impl_ISpatialHoldCompletedEventArgs;
template <typename T> struct impl_ISpatialHoldStartedEventArgs;
template <typename T> struct impl_ISpatialInteraction;
template <typename T> struct impl_ISpatialInteractionDetectedEventArgs;
template <typename T> struct impl_ISpatialInteractionManager;
template <typename T> struct impl_ISpatialInteractionManagerStatics;
template <typename T> struct impl_ISpatialInteractionSource;
template <typename T> struct impl_ISpatialInteractionSourceEventArgs;
template <typename T> struct impl_ISpatialInteractionSourceLocation;
template <typename T> struct impl_ISpatialInteractionSourceLocation2;
template <typename T> struct impl_ISpatialInteractionSourceProperties;
template <typename T> struct impl_ISpatialInteractionSourceState;
template <typename T> struct impl_ISpatialManipulationCanceledEventArgs;
template <typename T> struct impl_ISpatialManipulationCompletedEventArgs;
template <typename T> struct impl_ISpatialManipulationDelta;
template <typename T> struct impl_ISpatialManipulationStartedEventArgs;
template <typename T> struct impl_ISpatialManipulationUpdatedEventArgs;
template <typename T> struct impl_ISpatialNavigationCanceledEventArgs;
template <typename T> struct impl_ISpatialNavigationCompletedEventArgs;
template <typename T> struct impl_ISpatialNavigationStartedEventArgs;
template <typename T> struct impl_ISpatialNavigationUpdatedEventArgs;
template <typename T> struct impl_ISpatialPointerPose;
template <typename T> struct impl_ISpatialPointerPoseStatics;
template <typename T> struct impl_ISpatialRecognitionEndedEventArgs;
template <typename T> struct impl_ISpatialRecognitionStartedEventArgs;
template <typename T> struct impl_ISpatialTappedEventArgs;

}

namespace impl {

template <> struct traits<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizer;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialGestureRecognizer<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialGestureRecognizerFactory<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialHoldCanceledEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialHoldCompletedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialHoldStartedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialInteraction>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialInteraction;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialInteraction<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialInteractionDetectedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialInteractionManager>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialInteractionManager;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialInteractionManager<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialInteractionManagerStatics<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialInteractionSource>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialInteractionSource;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialInteractionSource<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialInteractionSourceEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialInteractionSourceLocation<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialInteractionSourceLocation2<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialInteractionSourceProperties<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialInteractionSourceState>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialInteractionSourceState;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialInteractionSourceState<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialManipulationCanceledEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialManipulationCompletedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialManipulationDelta>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialManipulationDelta;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialManipulationDelta<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialManipulationStartedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialManipulationUpdatedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialNavigationCanceledEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialNavigationCompletedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialNavigationStartedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialNavigationUpdatedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialPointerPose>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialPointerPose;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialPointerPose<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialPointerPoseStatics>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialPointerPoseStatics;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialPointerPoseStatics<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialRecognitionEndedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialRecognitionStartedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::ISpatialTappedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::ISpatialTappedEventArgs;
    template <typename D> using consume = Windows::UI::Input::Spatial::impl_ISpatialTappedEventArgs<D>;
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialGestureRecognizer>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialGestureRecognizer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialGestureRecognizer"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialHoldCanceledEventArgs"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialHoldCompletedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialHoldStartedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialInteraction>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialInteraction;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialInteraction"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialInteractionDetectedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialInteractionManager>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialInteractionManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialInteractionManager"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialInteractionSource>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialInteractionSource;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialInteractionSource"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialInteractionSourceLocation>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceLocation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialInteractionSourceLocation"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialInteractionSourceProperties>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialInteractionSourceProperties"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialInteractionSourceState>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialInteractionSourceState;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialInteractionSourceState"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialManipulationCanceledEventArgs"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialManipulationCompletedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialManipulationDelta>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialManipulationDelta;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialManipulationDelta"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialManipulationStartedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialManipulationUpdatedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialNavigationCanceledEventArgs"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialNavigationCompletedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialNavigationStartedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialNavigationUpdatedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialPointerPose>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialPointerPose;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialPointerPose"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialRecognitionEndedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialRecognitionStartedEventArgs"; }
};

template <> struct traits<Windows::UI::Input::Spatial::SpatialTappedEventArgs>
{
    using abi = ABI::Windows::UI::Input::Spatial::SpatialTappedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Input.Spatial.SpatialTappedEventArgs"; }
};

}

}
