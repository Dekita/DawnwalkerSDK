#pragma once
#include "CoreMinimal.h"
#include "ItemBaseDataAsset.h"
#include "ItemRecipeDataAsset.generated.h"

class UObject;

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UItemRecipeDataAsset : public UItemBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CraftingResultItemID;
    
    UItemRecipeDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool IsRecipeKnown(const UObject* WorldContextObject) const;
    
};

