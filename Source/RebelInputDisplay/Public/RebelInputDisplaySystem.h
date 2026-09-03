#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "InputCoreTypes.h"
#include "ERebelInputIconType.h"
#include "Styling/SlateBrush.h"
#include "RebelInputDisplaySystem.generated.h"

class URebelInputDisplayConfig;

UCLASS(Blueprintable)
class REBELINPUTDISPLAY_API URebelInputDisplaySystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelInputIconType, URebelInputDisplayConfig*> LoadedIconSets;
    
    URebelInputDisplaySystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBrushForKey(const FKey& Key, uint8 DirectionMask, bool bCheckAllAvailableSets) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetBrushForKeyFromSet(const FKey& Key, uint8 DirectionMask, ERebelInputIconType IconSet) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetBrushForKey(const FKey& Key, uint8 DirectionMask, bool bCheckAllAvailableSets) const;
    
};

