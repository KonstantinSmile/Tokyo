// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef TOKYO_TokyoPlayerController_generated_h
#error "TokyoPlayerController.generated.h already included, missing '#pragma once' in TokyoPlayerController.h"
#endif
#define TOKYO_TokyoPlayerController_generated_h

#define ATokyoPlayerController_EVENTPARMS
#define ATokyoPlayerController_RPC_WRAPPERS
#define ATokyoPlayerController_CALLBACK_WRAPPERS
#define ATokyoPlayerController_INCLASS \
	private: \
	static void StaticRegisterNativesATokyoPlayerController(); \
	friend TOKYO_API class UClass* Z_Construct_UClass_ATokyoPlayerController(); \
	public: \
	DECLARE_CLASS(ATokyoPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, Tokyo, NO_API) \
	/** Standard constructor, called after all reflected properties have been initialized */    NO_API ATokyoPlayerController(const class FPostConstructInitializeProperties& PCIP); \
	DECLARE_SERIALIZER(ATokyoPlayerController) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME ATokyoPlayerController


#undef UCLASS
#undef UINTERFACE
#define UCLASS(...) \
ATokyoPlayerController_EVENTPARMS


#undef GENERATED_UCLASS_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
public: \
	ATokyoPlayerController_RPC_WRAPPERS \
	ATokyoPlayerController_CALLBACK_WRAPPERS \
	ATokyoPlayerController_INCLASS \
public:


