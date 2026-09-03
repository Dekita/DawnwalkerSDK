#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "ECourtAllegiance.h"
#include "ECourtEntryPowerState.h"
#include "ECourtEntryStatus.h"
#include "CourtEntry.generated.h"

class UObject;
class UPaperSprite;

UCLASS(Abstract, Blueprintable)
class DOGWOODQUEST_API UCourtEntry : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourtAllegiance Allegiance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> TileIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> DetailsPortrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EntryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourtEntryStatus DefaultStatus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RevealThreshold;
    
    UCourtEntry();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObj"))
    bool IsAllied(const UObject* WorldContextObj) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObj"))
    int32 GetResolvedChildActivityCount(const UObject* WorldContextObj) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObj"))
    double GetPowerLevel(const UObject* WorldContextObj) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetEntryTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObj"))
    ECourtEntryStatus GetCourtEntryStatus(const UObject* WorldContextObj) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObj"))
    ECourtEntryPowerState GetCourtEntryPowerState(const UObject* WorldContextObj) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChildCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChildActivityCount() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObj"))
    double GetAngerLevel(const UObject* WorldContextObj) const;
    
};

