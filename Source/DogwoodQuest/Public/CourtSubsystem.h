#pragma once
#include "CoreMinimal.h"
#include "CourtSystemInterface.h"
#include "EAlertChange.h"
#include "GameplayTagContainer.h"
#include "EAlertStage.h"
#include "AlertLevelChangeInfo.h"
#include "CourtEntryData.h"
#include "ECourtAllegiance.h"
#include "ECourtEntryStatus.h"
#include "ECourtEntryType.h"
#include "OnAlertLevelChangedDelegateDelegate.h"
#include "OnOfficerAngeredDelegateDelegate.h"
#include "CourtSubsystem.generated.h"

class UCompoundCourtEntry;
class UPaperSprite;
class UStringTable;

UCLASS(Blueprintable)
class DOGWOODQUEST_API UCourtSubsystem : public UCourtSystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAlertLevelChangedDelegate OnAlertLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOfficerAngeredDelegate OnOfficerAngered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCompoundCourtEntry* CourtEntryRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FCourtEntryData> EntriesDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPossibleThresholdLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECourtAllegiance, UPaperSprite*> CourtAllegianceIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECourtAllegiance, UPaperSprite*> CourtAllegianceIconsTracked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECourtAllegiance, UPaperSprite*> CourtFinalQuestIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECourtAllegiance, UPaperSprite*> CourtFinalQuestIconsTracked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStringTable* LoadedEdictsStringTable;
    
public:
    UCourtSubsystem();

    UFUNCTION(BlueprintCallable)
    bool SetEntryStatusComplete(FGameplayTag EntryTag, ECourtEntryStatus NewStatus, int32 AlertChange);
    
    UFUNCTION(BlueprintCallable)
    bool SetEntryStatus(FGameplayTag EntryTag, ECourtEntryStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetAlertLevelByInt(int32 NewAlertLevel, FAlertLevelChangeInfo ChangeInfo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAlertLevel(int32 NewSetAlertLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetThresholdLevelForArbitraryValue(float InAlertValue) const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetSubEntryParentTag(FGameplayTag EntryTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSingleAlertThresholdBarValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCompoundCourtEntry* GetRootEntry() const;
    
    UFUNCTION(BlueprintCallable)
    ECourtEntryType GetEntryType(FGameplayTag EntryTag);
    
    UFUNCTION(BlueprintCallable)
    ECourtEntryStatus GetEntryStatusDirectlyFromFact(FGameplayTag EntryTag);
    
    UFUNCTION(BlueprintCallable)
    ECourtEntryStatus GetEntryStatus(FGameplayTag EntryTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAlertThresholdLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAlertStage GetAlertStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAlertLevelPercentageForArbitraryValue(float InAlertValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAlertLevelPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAlertLevel() const;
    
    UFUNCTION(BlueprintCallable)
    void DropAlertLevelByInt(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeAlertLevelByInt(int32 Amount, FAlertLevelChangeInfo ChangeInfo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeAlertLevel(EAlertChange Change);
    
};

