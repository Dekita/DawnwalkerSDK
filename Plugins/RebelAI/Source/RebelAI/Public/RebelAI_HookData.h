#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StructUtils/InstancedStruct.h"
#include "RebelGenericTreeBindingData.h"
#include "EHookType.h"
#include "EHookVersion.h"
#include "RebelAI_HookData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_HookData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHookType Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 FixedID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> IncludesPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LinkedGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct InstancedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelGenericTreeBindingData BindingHookData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHookVersion Version;
    
    FRebelAI_HookData();
};

