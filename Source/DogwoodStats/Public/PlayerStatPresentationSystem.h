#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "PresentedStat.h"
#include "PlayerStatPresentationSystem.generated.h"

class UDataTable;
class UObject;
class UStringTable;

UCLASS(Blueprintable)
class DOGWOODSTATS_API UPlayerStatPresentationSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PresentedStatTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* StatFormatTable;
    
public:
    UPlayerStatPresentationSystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetTopLevelStats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStatName(const FGameplayTag& StatTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    FText GetStatAsLocalizedText(const FGameplayTag& StatTag, const UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPresentedStat GetStat(const FGameplayTag& StatTag, bool& bFound);
    
};

