#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "SaveGameInterface.h"
#include "EReadableBackgroundType.h"
#include "EReadableDecalType.h"
#include "EReadableSealType.h"
#include "GlossaryCategoryContainer.h"
#include "GlossaryEntry.h"
#include "GlossaryReadableEntry.h"
#include "OnShowReadableDelegate.h"
#include "OnViewedReadablesUpdatedDelegate.h"
#include "ReadableBackgroundTypeRow.h"
#include "ReadableDecalTypeRow.h"
#include "ReadableSealTypeRow.h"
#include "GlossarySubsystem.generated.h"

class UDataTable;
class UReadableDataAsset;

UCLASS(Blueprintable)
class DOGWOODGLOSSARY_API UGlossarySubsystem : public UGameInstanceSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnViewedReadablesUpdated OnViewedReadablesUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowReadable OnShowReadable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGlossaryReadableEntry> GlossaryReadables;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LoadedGlossaryTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGlossaryCategoryContainer> CategorizedGlossaryEntryMap;
    
public:
    UGlossarySubsystem();

    UFUNCTION(BlueprintCallable)
    void UnlockEntry(const FGameplayTag& Tag, bool bSilent);
    
    UFUNCTION(BlueprintCallable)
    void SortEntries();
    
    UFUNCTION(BlueprintCallable)
    void ShowReadable_SoftReference(const TSoftObjectPtr<UReadableDataAsset>& ReadableAsset);
    
    UFUNCTION(BlueprintCallable)
    void ShowReadable(const UReadableDataAsset* ReadableAsset);
    
    UFUNCTION(BlueprintCallable)
    void RegisterReadableIDAsViewed(const FName& ReadableID);
    
    UFUNCTION(BlueprintCallable)
    void RegisterReadableAsViewed(const UReadableDataAsset* ReadableAsset);
    
    UFUNCTION(BlueprintCallable)
    void RegisterReadableAsUnlocked(const UReadableDataAsset* ReadableAsset);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEntryAsViewed(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEntryAndUnlockedSectionsAsViewed(const FGlossaryEntry& Entry);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseReadable(const UReadableDataAsset* ReadableAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntryUnlocked(const FGlossaryEntry& Entry) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntryTagUnlocked(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReadableBeenViewed(const FName& ReadableID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReadableBeenUnlocked(const FName& ReadableID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEntryBeenViewed(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEntryAndUnlockedSectionsBeenViewed(const FGlossaryEntry& Entry) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetUnlockedContentText(const FGlossaryEntry& Entry) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FReadableSealTypeRow GetSeal(const EReadableSealType Seal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGlossaryEntry GetGlossaryEntry(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGlossaryEntry> GetEntriesForCategory(const FGameplayTag CategoryTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FReadableDecalTypeRow GetDecal(const EReadableDecalType Decal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FReadableBackgroundTypeRow GetBackground(const EReadableBackgroundType Background) const;
    

    // Fix for true pure virtual functions not being implemented
};

