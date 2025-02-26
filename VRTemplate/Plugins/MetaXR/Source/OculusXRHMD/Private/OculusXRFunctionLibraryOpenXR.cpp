// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRFunctionLibraryOpenXR.h"

#include "OculusXRHMD.h"

namespace
{
	struct HeadModelParms
	{
		float HeadModelDepth;
		float HeadModelHeight;
	};

	// CompositorOpenXR Constants
	const HeadModelParms DefaultHeadModel = {
		0.0805f,
		0.0750f,
	};

	FVector2D GetUserNeckEyeDistance()
	{
		return FVector2D(DefaultHeadModel.HeadModelDepth, DefaultHeadModel.HeadModelHeight);
	}
} // namespace

#define NOT_IMPLEMENTED() \
	UE_LOG(LogHMD, Log, TEXT("%hs Not Implemented In OpenXR"), __FUNCTION__);

namespace OculusXRHMD
{
	void FOculusXRFunctionLibraryOpenXR::GetPose(FRotator& DeviceRotation, FVector& DevicePosition, FVector& NeckPosition)
	{
		FQuat HeadOrientation = FQuat::Identity;
		FVector HeadPosition = FVector::ZeroVector;

		GEngine->XRSystem->GetCurrentPose(IXRTrackingSystem::HMDDeviceId, HeadOrientation, HeadPosition);

		FVector LocalNeckPosition = HeadOrientation.Inverse().RotateVector(HeadPosition);
		const FVector2D NeckEyeDistance = GetUserNeckEyeDistance();

		const float WorldToMetersScale = GEngine->XRSystem->GetWorldToMetersScale();
		LocalNeckPosition.X -= NeckEyeDistance.X * WorldToMetersScale;
		LocalNeckPosition.Z -= NeckEyeDistance.Y * WorldToMetersScale;

		DeviceRotation = HeadOrientation.Rotator();
		DevicePosition = HeadPosition;
		NeckPosition = LocalNeckPosition;
	}

	void FOculusXRFunctionLibraryOpenXR::SetBaseRotationAndBaseOffsetInMeters(FRotator Rotation, FVector BaseOffsetInMeters, EOrientPositionSelector::Type Options)
	{
		NOT_IMPLEMENTED();
	}

	void FOculusXRFunctionLibraryOpenXR::GetBaseRotationAndBaseOffsetInMeters(FRotator& OutRotation, FVector& OutBaseOffsetInMeters)
	{
		NOT_IMPLEMENTED();
	}

	void FOculusXRFunctionLibraryOpenXR::GetRawSensorData(FVector& AngularAcceleration, FVector& LinearAcceleration, FVector& AngularVelocity, FVector& LinearVelocity, float& TimeInSeconds, EOculusXRTrackedDeviceType DeviceType)
	{
		NOT_IMPLEMENTED();
	}

	bool FOculusXRFunctionLibraryOpenXR::IsDeviceTracked(EOculusXRTrackedDeviceType DeviceType)
	{
		NOT_IMPLEMENTED();
		return false;
	}

	void FOculusXRFunctionLibraryOpenXR::GetSuggestedCpuAndGpuPerformanceLevels(EOculusXRProcessorPerformanceLevel& CpuPerfLevel, EOculusXRProcessorPerformanceLevel& GpuPerfLevel)
	{
		NOT_IMPLEMENTED();
	}

	void FOculusXRFunctionLibraryOpenXR::SetSuggestedCpuAndGpuPerformanceLevels(EOculusXRProcessorPerformanceLevel CpuPerfLevel, EOculusXRProcessorPerformanceLevel GpuPerfLevel)
	{
		NOT_IMPLEMENTED();
	}

	void FOculusXRFunctionLibraryOpenXR::SetCPUAndGPULevels(int CPULevel, int GPULevel)
	{
		NOT_IMPLEMENTED();
	}

	bool FOculusXRFunctionLibraryOpenXR::GetUserProfile(FOculusXRHmdUserProfile& Profile)
	{
		NOT_IMPLEMENTED();
		return false;
	}

	void FOculusXRFunctionLibraryOpenXR::SetBaseRotationAndPositionOffset(FRotator BaseRot, FVector PosOffset, EOrientPositionSelector::Type Options)
	{
		NOT_IMPLEMENTED();
	}

	void FOculusXRFunctionLibraryOpenXR::GetBaseRotationAndPositionOffset(FRotator& OutRot, FVector& OutPosOffset)
	{
		NOT_IMPLEMENTED();
	}

	void FOculusXRFunctionLibraryOpenXR::AddLoadingSplashScreen(class UTexture2D* Texture, FVector TranslationInMeters, FRotator Rotation, FVector2D SizeInMeters, FRotator DeltaRotation, bool bClearBeforeAdd)
	{
		NOT_IMPLEMENTED();
	}

	void FOculusXRFunctionLibraryOpenXR::ClearLoadingSplashScreens()
	{
		NOT_IMPLEMENTED();
	}

	bool FOculusXRFunctionLibraryOpenXR::HasInputFocus()
	{
		NOT_IMPLEMENTED();
		return false;
	}

	bool FOculusXRFunctionLibraryOpenXR::HasSystemOverlayPresent()
	{
		NOT_IMPLEMENTED();
		return false;
	}

	void FOculusXRFunctionLibraryOpenXR::GetGPUUtilization(bool& IsGPUAvailable, float& GPUUtilization)
	{
		NOT_IMPLEMENTED();
	}

	float FOculusXRFunctionLibraryOpenXR::GetGPUFrameTime()
	{
		NOT_IMPLEMENTED();
		return 0.0f;
	}

	void FOculusXRFunctionLibraryOpenXR::GetPerformanceMetrics(FOculusXRPerformanceMetrics& PerformanceMetrics)
	{
		NOT_IMPLEMENTED();
	}


	EOculusXRFoveatedRenderingMethod FOculusXRFunctionLibraryOpenXR::GetFoveatedRenderingMethod()
	{
		NOT_IMPLEMENTED();
		return EOculusXRFoveatedRenderingMethod::FixedFoveatedRendering;
	}

	void FOculusXRFunctionLibraryOpenXR::SetFoveatedRenderingMethod(EOculusXRFoveatedRenderingMethod Method)
	{
		NOT_IMPLEMENTED();
	}

	void FOculusXRFunctionLibraryOpenXR::SetFoveatedRenderingLevel(EOculusXRFoveatedRenderingLevel level, bool isDynamic)
	{
		NOT_IMPLEMENTED();
	}

	EOculusXRFoveatedRenderingLevel FOculusXRFunctionLibraryOpenXR::GetFoveatedRenderingLevel()
	{
		NOT_IMPLEMENTED();
		return EOculusXRFoveatedRenderingLevel::Off;
	}

	bool FOculusXRFunctionLibraryOpenXR::GetEyeTrackedFoveatedRenderingSupported()
	{
		NOT_IMPLEMENTED();
		return false;
	}

	FString FOculusXRFunctionLibraryOpenXR::GetDeviceName()
	{
		NOT_IMPLEMENTED();
		return FString();
	}

	EOculusXRDeviceType FOculusXRFunctionLibraryOpenXR::GetDeviceType()
	{
		NOT_IMPLEMENTED();
		return EOculusXRDeviceType::OculusUnknown;
	}

	EOculusXRControllerType FOculusXRFunctionLibraryOpenXR::GetControllerType(EControllerHand deviceHand)
	{
		NOT_IMPLEMENTED();
		return EOculusXRControllerType::Unknown;
	}

	TArray<float> FOculusXRFunctionLibraryOpenXR::GetAvailableDisplayFrequencies()
	{
		NOT_IMPLEMENTED();
		return TArray<float>();
	}

	float FOculusXRFunctionLibraryOpenXR::GetCurrentDisplayFrequency()
	{
		NOT_IMPLEMENTED();
		return 0.0f;
	}

	void FOculusXRFunctionLibraryOpenXR::SetDisplayFrequency(float RequestedFrequency)
	{
		NOT_IMPLEMENTED();
	}

	void FOculusXRFunctionLibraryOpenXR::EnablePositionTracking(bool bPositionTracking)
	{
		NOT_IMPLEMENTED();
	}

	void FOculusXRFunctionLibraryOpenXR::EnableOrientationTracking(bool bOrientationTracking)
	{
		NOT_IMPLEMENTED();
	}

	void FOculusXRFunctionLibraryOpenXR::SetColorScaleAndOffset(FLinearColor ColorScale, FLinearColor ColorOffset, bool bApplyToAllLayers)
	{
		NOT_IMPLEMENTED();
	}

	class IStereoLayers* FOculusXRFunctionLibraryOpenXR::GetStereoLayers()
	{
		NOT_IMPLEMENTED();
		return nullptr;
	}

	bool FOculusXRFunctionLibraryOpenXR::IsGuardianConfigured()
	{
		NOT_IMPLEMENTED();
		return false;
	}

	bool FOculusXRFunctionLibraryOpenXR::IsGuardianDisplayed()
	{
		NOT_IMPLEMENTED();
		return false;
	}

	TArray<FVector> FOculusXRFunctionLibraryOpenXR::GetGuardianPoints(EOculusXRBoundaryType BoundaryType, bool UsePawnSpace /* = false */)
	{
		NOT_IMPLEMENTED();
		TArray<FVector> BoundaryPointList;
		return BoundaryPointList;
	}

	FVector FOculusXRFunctionLibraryOpenXR::GetGuardianDimensions(EOculusXRBoundaryType BoundaryType)
	{
		NOT_IMPLEMENTED();
		return FVector::ZeroVector;
	}

	FTransform FOculusXRFunctionLibraryOpenXR::GetPlayAreaTransform()
	{
		NOT_IMPLEMENTED();
		return FTransform();
	}

	FOculusXRGuardianTestResult FOculusXRFunctionLibraryOpenXR::GetPointGuardianIntersection(const FVector Point, EOculusXRBoundaryType BoundaryType)
	{
		NOT_IMPLEMENTED();
		FOculusXRGuardianTestResult InteractionInfo;
		memset(&InteractionInfo, 0, sizeof(FOculusXRGuardianTestResult));
		return InteractionInfo;
	}

	FOculusXRGuardianTestResult FOculusXRFunctionLibraryOpenXR::GetNodeGuardianIntersection(EOculusXRTrackedDeviceType DeviceType, EOculusXRBoundaryType BoundaryType)
	{
		NOT_IMPLEMENTED();
		FOculusXRGuardianTestResult InteractionInfo;
		memset(&InteractionInfo, 0, sizeof(FOculusXRGuardianTestResult));
		return InteractionInfo;
	}

	void FOculusXRFunctionLibraryOpenXR::SetGuardianVisibility(bool GuardianVisible)
	{
		NOT_IMPLEMENTED();
	}

	bool FOculusXRFunctionLibraryOpenXR::GetSystemHmd3DofModeEnabled()
	{
		NOT_IMPLEMENTED();
		return false;
	}

	EOculusXRColorSpace FOculusXRFunctionLibraryOpenXR::GetHmdColorDesc()
	{
		NOT_IMPLEMENTED();
		return EOculusXRColorSpace::Unknown;
	}

	void FOculusXRFunctionLibraryOpenXR::SetClientColorDesc(EOculusXRColorSpace ColorSpace)
	{
		NOT_IMPLEMENTED();
	}

	void FOculusXRFunctionLibraryOpenXR::SetLocalDimmingOn(bool LocalDimmingOn)
	{
		NOT_IMPLEMENTED();
	}

	bool FOculusXRFunctionLibraryOpenXR::IsPassthroughSupported()
	{
		NOT_IMPLEMENTED();
		return false;
	}

	bool FOculusXRFunctionLibraryOpenXR::IsColorPassthroughSupported()
	{
		NOT_IMPLEMENTED();
		return false;
	}

	void FOculusXRFunctionLibraryOpenXR::StartEnvironmentDepth()
	{
		NOT_IMPLEMENTED();
	}

	void FOculusXRFunctionLibraryOpenXR::StopEnvironmentDepth()
	{
		NOT_IMPLEMENTED();
	}

	bool FOculusXRFunctionLibraryOpenXR::IsEnvironmentDepthStarted()
	{
		NOT_IMPLEMENTED();
		return false;
	}

	void FOculusXRFunctionLibraryOpenXR::SetEnvironmentDepthHandRemoval(bool RemoveHands)
	{
		NOT_IMPLEMENTED();
	}

	void FOculusXRFunctionLibraryOpenXR::SetXROcclusionsMode(UObject* WorldContextObject, EOculusXROcclusionsMode Mode)
	{
		NOT_IMPLEMENTED();
	}

	void FOculusXRFunctionLibraryOpenXR::SetEyeBufferSharpenType(EOculusXREyeBufferSharpenType EyeBufferSharpenType)
	{
		NOT_IMPLEMENTED();
	}

	bool FOculusXRFunctionLibraryOpenXR::IsPassthroughRecommended()
	{
		NOT_IMPLEMENTED();
		return false;
	}

} // namespace OculusXRHMD
