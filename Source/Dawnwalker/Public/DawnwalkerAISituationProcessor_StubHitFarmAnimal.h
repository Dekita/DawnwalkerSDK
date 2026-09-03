#pragma once
#include "CoreMinimal.h"
#include "CreatureTypeContainer.h"
#include "GameplayTagContainer.h"
#include "RebelAISituationProcessor.h"
#include "DawnwalkerAISituationProcessor_StubHitFarmAnimal.generated.h"

class URebelAIStub;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UDawnwalkerAISituationProcessor_StubHitFarmAnimal : public URebelAISituationProcessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureTypeContainer SupportedCreatureTypes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URebelAIStub> InstigatorPtr;
    
public:
    UDawnwalkerAISituationProcessor_StubHitFarmAnimal();

};

