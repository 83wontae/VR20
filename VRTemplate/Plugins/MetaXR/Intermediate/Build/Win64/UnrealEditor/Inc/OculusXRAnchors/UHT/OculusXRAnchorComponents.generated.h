// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRAnchorComponents.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOculusXRSpaceComponentType : uint8;
struct FOculusXRUUID;
#ifdef OCULUSXRANCHORS_OculusXRAnchorComponents_generated_h
#error "OculusXRAnchorComponents.generated.h already included, missing '#pragma once' in OculusXRAnchorComponents.h"
#endif
#define OCULUSXRANCHORS_OculusXRAnchorComponents_generated_h

#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execIsComponentEnabled);


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRBaseAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRBaseAnchorComponent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRBaseAnchorComponent)


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRBaseAnchorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusXRBaseAnchorComponent(UOculusXRBaseAnchorComponent&&); \
	UOculusXRBaseAnchorComponent(const UOculusXRBaseAnchorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRBaseAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRBaseAnchorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRBaseAnchorComponent) \
	NO_API virtual ~UOculusXRBaseAnchorComponent();


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_8_PROLOG
#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_INCLASS_NO_PURE_DECLS \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRANCHORS_API UClass* StaticClass<class UOculusXRBaseAnchorComponent>();

#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTransform);


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRLocatableAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRLocatableAnchorComponent, UOculusXRBaseAnchorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRLocatableAnchorComponent)


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusXRLocatableAnchorComponent(UOculusXRLocatableAnchorComponent&&); \
	UOculusXRLocatableAnchorComponent(const UOculusXRLocatableAnchorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRLocatableAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRLocatableAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRLocatableAnchorComponent) \
	NO_API virtual ~UOculusXRLocatableAnchorComponent();


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_34_PROLOG
#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_INCLASS_NO_PURE_DECLS \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRANCHORS_API UClass* StaticClass<class UOculusXRLocatableAnchorComponent>();

#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPositionAndSize);


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRPlaneAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRPlaneAnchorComponent, UOculusXRBaseAnchorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRPlaneAnchorComponent)


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusXRPlaneAnchorComponent(UOculusXRPlaneAnchorComponent&&); \
	UOculusXRPlaneAnchorComponent(const UOculusXRPlaneAnchorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRPlaneAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRPlaneAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRPlaneAnchorComponent) \
	NO_API virtual ~UOculusXRPlaneAnchorComponent();


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_48_PROLOG
#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_INCLASS_NO_PURE_DECLS \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRANCHORS_API UClass* StaticClass<class UOculusXRPlaneAnchorComponent>();

#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPositionAndSize);


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRVolumeAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRVolumeAnchorComponent, UOculusXRBaseAnchorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRVolumeAnchorComponent)


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_65_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusXRVolumeAnchorComponent(UOculusXRVolumeAnchorComponent&&); \
	UOculusXRVolumeAnchorComponent(const UOculusXRVolumeAnchorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRVolumeAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRVolumeAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRVolumeAnchorComponent) \
	NO_API virtual ~UOculusXRVolumeAnchorComponent();


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_62_PROLOG
#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_65_INCLASS_NO_PURE_DECLS \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRANCHORS_API UClass* StaticClass<class UOculusXRVolumeAnchorComponent>();

#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSemanticClassifications);


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRSemanticClassificationAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRSemanticClassificationAnchorComponent, UOculusXRBaseAnchorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRSemanticClassificationAnchorComponent)


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_79_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusXRSemanticClassificationAnchorComponent(UOculusXRSemanticClassificationAnchorComponent&&); \
	UOculusXRSemanticClassificationAnchorComponent(const UOculusXRSemanticClassificationAnchorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRSemanticClassificationAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRSemanticClassificationAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRSemanticClassificationAnchorComponent) \
	NO_API virtual ~UOculusXRSemanticClassificationAnchorComponent();


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_76_PROLOG
#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_79_INCLASS_NO_PURE_DECLS \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRANCHORS_API UClass* StaticClass<class UOculusXRSemanticClassificationAnchorComponent>();

#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRoomLayout);


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRRoomLayoutAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRRoomLayoutAnchorComponent, UOculusXRBaseAnchorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRRoomLayoutAnchorComponent)


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_93_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusXRRoomLayoutAnchorComponent(UOculusXRRoomLayoutAnchorComponent&&); \
	UOculusXRRoomLayoutAnchorComponent(const UOculusXRRoomLayoutAnchorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRRoomLayoutAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRRoomLayoutAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRRoomLayoutAnchorComponent) \
	NO_API virtual ~UOculusXRRoomLayoutAnchorComponent();


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_90_PROLOG
#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_93_INCLASS_NO_PURE_DECLS \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRANCHORS_API UClass* StaticClass<class UOculusXRRoomLayoutAnchorComponent>();

#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUUIDs);


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRSpaceContainerAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRSpaceContainerAnchorComponent, UOculusXRBaseAnchorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRSpaceContainerAnchorComponent)


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_107_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusXRSpaceContainerAnchorComponent(UOculusXRSpaceContainerAnchorComponent&&); \
	UOculusXRSpaceContainerAnchorComponent(const UOculusXRSpaceContainerAnchorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRSpaceContainerAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRSpaceContainerAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRSpaceContainerAnchorComponent) \
	NO_API virtual ~UOculusXRSpaceContainerAnchorComponent();


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_104_PROLOG
#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_107_INCLASS_NO_PURE_DECLS \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRANCHORS_API UClass* StaticClass<class UOculusXRSpaceContainerAnchorComponent>();

#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRSharableAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRSharableAnchorComponent, UOculusXRBaseAnchorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRSharableAnchorComponent)


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_121_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusXRSharableAnchorComponent(UOculusXRSharableAnchorComponent&&); \
	UOculusXRSharableAnchorComponent(const UOculusXRSharableAnchorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRSharableAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRSharableAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRSharableAnchorComponent) \
	NO_API virtual ~UOculusXRSharableAnchorComponent();


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_118_PROLOG
#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_121_INCLASS_NO_PURE_DECLS \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRANCHORS_API UClass* StaticClass<class UOculusXRSharableAnchorComponent>();

#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_132_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRStorableAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRStorableAnchorComponent, UOculusXRBaseAnchorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRStorableAnchorComponent)


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_132_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusXRStorableAnchorComponent(UOculusXRStorableAnchorComponent&&); \
	UOculusXRStorableAnchorComponent(const UOculusXRStorableAnchorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRStorableAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRStorableAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRStorableAnchorComponent) \
	NO_API virtual ~UOculusXRStorableAnchorComponent();


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_129_PROLOG
#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_132_INCLASS_NO_PURE_DECLS \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_132_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRANCHORS_API UClass* StaticClass<class UOculusXRStorableAnchorComponent>();

#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRTriangleMeshAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRTriangleMeshAnchorComponent, UOculusXRBaseAnchorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRTriangleMeshAnchorComponent)


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_143_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusXRTriangleMeshAnchorComponent(UOculusXRTriangleMeshAnchorComponent&&); \
	UOculusXRTriangleMeshAnchorComponent(const UOculusXRTriangleMeshAnchorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRTriangleMeshAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRTriangleMeshAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRTriangleMeshAnchorComponent) \
	NO_API virtual ~UOculusXRTriangleMeshAnchorComponent();


#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_140_PROLOG
#define FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_143_INCLASS_NO_PURE_DECLS \
	FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRANCHORS_API UClass* StaticClass<class UOculusXRTriangleMeshAnchorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_VR20_VRTemplate_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
