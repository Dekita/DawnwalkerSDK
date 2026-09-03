#pragma once
#include "CoreMinimal.h"
#include "RegionData.h"
#include "SaveGameInterface.h"
#include "OnTryToSetFastTravelMappinStateDelegate.h"
#include "OpenWorldJournalInterface.h"
#include "OpenWorldJournalImpl.generated.h"

class UOpenWorldContent;

UCLASS(Blueprintable)
class DOGWOODMAP_API UOpenWorldJournalImpl : public UOpenWorldJournalInterface, public ISaveGameInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMappinsInRegionRevealed, int32, RevealedMappinCount);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UOpenWorldContent*> LoadedAssets;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTryToSetFastTravelMappinState OnTryToSetFastTravelMappinState;
    
public:
    UOpenWorldJournalImpl();

private:
    UFUNCTION(BlueprintCallable)
    void OnRegionStatusUpdated(const FRegionData& RegionData, bool bIsNewlyDiscovered, bool EnteredRegion);
    

    // Fix for true pure virtual functions not being implemented
};

