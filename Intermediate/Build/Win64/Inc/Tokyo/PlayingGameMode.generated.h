// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef TOKYO_PlayingGameMode_generated_h
#error "PlayingGameMode.generated.h already included, missing '#pragma once' in PlayingGameMode.h"
#endif
#define TOKYO_PlayingGameMode_generated_h

#define APlayingGameMode_EVENTPARMS
#define APlayingGameMode_RPC_WRAPPERS
#define APlayingGameMode_CALLBACK_WRAPPERS
#define APlayingGameMode_INCLASS \
	private: \
	static void StaticRegisterNativesAPlayingGameMode(); \
	friend TOKYO_API class UClass* Z_Construct_UClass_APlayingGameMode(); \
	public: \
	DECLARE_CLASS(APlayingGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, Tokyo, NO_API) \
	/** Standard constructor, called after all reflected properties have been initialized */    NO_API APlayingGameMode(const class FPostConstructInitializeProperties& PCIP); \
	DECLARE_SERIALIZER(APlayingGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME APlayingGameMode


#undef UCLASS
#undef UINTERFACE
#define UCLASS(...) \
APlayingGameMode_EVENTPARMS


#undef GENERATED_UCLASS_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
public: \
	APlayingGameMode_RPC_WRAPPERS \
	APlayingGameMode_CALLBACK_WRAPPERS \
	APlayingGameMode_INCLASS \
public:


