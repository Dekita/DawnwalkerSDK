#pragma once
#include "CoreMinimal.h"
#include "ERegionAllegiance.h"
#include "RegionData.h"
#include "Blueprint/UserWidget.h"
#include "MapLabel.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DOGWOODUI_API UMapLabel : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HoveredZ;
    
public:
    UMapLabel();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDifficultyLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRegion(const FRegionData& RegionData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAllegiance(ERegionAllegiance Allegiance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HandlesHover();
    
};

