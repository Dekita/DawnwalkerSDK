#pragma once
#include "CoreMinimal.h"
#include "ECourtEntryPowerState.h"
#include "GameplayTagContainer.h"
#include "CourtTileUISetup.h"
#include "DWButtonBase.h"
#include "ECourtTileType.h"
#include "CourtTileWidget.generated.h"

class UCourtEntry;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCourtTileWidget : public UDWButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCourtEntry* TargetEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCourtTileUISetup TileSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasOverrideState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourtEntryPowerState OverrideState;
    
    UCourtTileWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDisplayedEntry();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetEntry(const FGameplayTag& EntryTag);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideState(bool bInOverride, ECourtEntryPowerState InOverrideState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECourtTileType GetTileType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECourtEntryPowerState GetTileState() const;
    
};

