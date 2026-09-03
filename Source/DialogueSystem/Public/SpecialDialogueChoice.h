#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "SpecialDialogueChoice.generated.h"

class UCommonTextStyle;
class UPaperSprite;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class DIALOGUESYSTEM_API USpecialDialogueChoice : public UObject {
    GENERATED_BODY()
public:
    USpecialDialogueChoice();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasQuantity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    FText GetText(const FText& InDesignerText, UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UPaperSprite> GetSprite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    TSubclassOf<UCommonTextStyle> GetQuantityTextStyle(UObject* WorldContextObject, bool bIsProgressing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    FText GetQuantityText(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    int32 BP_GetQuantity(UObject* InWorldContext) const;
    
};

