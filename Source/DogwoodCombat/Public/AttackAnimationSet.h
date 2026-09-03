#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimationSet.h"
#include "Templates/SubclassOf.h"
#include "AttackAnimationSet.generated.h"

class UGameplayAbility;

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UAttackAnimationSet : public UAnimationSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, FGameplayTag> TagsByDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayAbility>> AttackAbilities;
    
public:
    UAttackAnimationSet();

};

