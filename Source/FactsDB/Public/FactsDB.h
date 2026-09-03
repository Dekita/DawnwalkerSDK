#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "SaveGameInterface.h"
#include "FactObserverDelegateDelegate.h"
#include "FactObserverMulticastDelegateDelegate.h"
#include "FactsDB.generated.h"

UCLASS(Blueprintable, HideDropdown)
class FACTSDB_API UFactsDB : public UObject, public ISaveGameInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FFactObserverMulticastDelegate> FactsDelegates;
    
public:
    UFactsDB();

    UFUNCTION(BlueprintCallable)
    void RemoveFactObserver(const FGameplayTag& FactName, const FFactObserverDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFact(const FGameplayTag FactName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllFactObservers(const FGameplayTag& FactName);
    
    UFUNCTION(BlueprintCallable)
    void FactSetInt(const FGameplayTag FactName, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FactGetInt(const FGameplayTag FactName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FactDoesExist(const FGameplayTag FactName);
    
    UFUNCTION(BlueprintCallable)
    void Empty();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllFacts();
    
    UFUNCTION(BlueprintCallable)
    void AddToFactInt(const FGameplayTag FactName, int32 Modifier);
    
    UFUNCTION(BlueprintCallable)
    void AddFactObserver(const FGameplayTag& FactName, const FFactObserverDelegate& Delegate);
    

    // Fix for true pure virtual functions not being implemented
};

