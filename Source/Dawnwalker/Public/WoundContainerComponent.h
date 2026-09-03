#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnAttributeChangeDelegateDelegate.h"
#include "Wound.h"
#include "WoundDelegateDelegate.h"
#include "WoundContainerComponent.generated.h"

class UWoundContainerConfig;
class UWoundType;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UWoundContainerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWoundDelegate OnWoundInflicted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWoundDelegate OnWoundMitigated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWoundDelegate OnWoundAboutToBeHealed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWoundDelegate OnWoundHealed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWoundContainerConfig* Config;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttributeChangeDelegate OnPermDamageChanged;
    
    UWoundContainerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void MitigateAllWounds();
    
    UFUNCTION(BlueprintCallable)
    void InflictWound(UWoundType* WoundType);
    
    UFUNCTION(BlueprintCallable)
    void HealAllWounds();
    
    UFUNCTION(BlueprintCallable)
    TArray<FWound> GetWounds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeWoundedBy(UWoundType* WoundType) const;
    
};

