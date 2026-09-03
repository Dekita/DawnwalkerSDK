#pragma once
#include "CoreMinimal.h"
#include "RebelGenericTreeBindingData.h"
#include "RebelAI_Include_OverriddenData.h"
#include "RebelAI_Include_OverrideData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_Include_OverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> Overridden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FRebelAI_Include_OverriddenData> OverriddenList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelGenericTreeBindingData BindingOverrideData;
    
    FRebelAI_Include_OverrideData();
};

