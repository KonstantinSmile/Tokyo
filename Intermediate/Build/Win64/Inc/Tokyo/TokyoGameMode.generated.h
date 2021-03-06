// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef TOKYO_TokyoGameMode_generated_h
#error "TokyoGameMode.generated.h already included, missing '#pragma once' in TokyoGameMode.h"
#endif
#define TOKYO_TokyoGameMode_generated_h

#define ATokyoGameMode_EVENTPARMS
#define ATokyoGameMode_RPC_WRAPPERS
#define ATokyoGameMode_CALLBACK_WRAPPERS
#define ATokyoGameMode_INCLASS \
	private: \
	static void StaticRegisterNativesATokyoGameMode(); \
	friend TOKYO_API class UClass* Z_Construct_UClass_ATokyoGameMode(); \
	public: \
	DECLARE_CLASS(ATokyoGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, Tokyo, NO_API) \
	/** Standard constructor, called after all reflected properties have been initialized */    NO_API ATokyoGameMode(const class FPostConstructInitializeProperties& PCIP); \
	DECLARE_SERIALIZER(ATokyoGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME ATokyoGameMode


#undef UCLASS
#undef UINTERFACE
#define UCLASS(...) \
ATokyoGameMode_EVENTPARMS


#undef GENERATED_UCLASS_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
public: \
	ATokyoGameMode_RPC_WRAPPERS \
	ATokyoGameMode_CALLBACK_WRAPPERS \
	ATokyoGameMode_INCLASS \
public:


