#pragma once
#include "CoreMinimal.h"
#include "StructUtils/PropertyBag.h"
#include "RebelAI_Include_OverriddenData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_Include_OverriddenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInPropertyBag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPropertyBagData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag Bag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> AssetRef;
    
    FRebelAI_Include_OverriddenData();
};

