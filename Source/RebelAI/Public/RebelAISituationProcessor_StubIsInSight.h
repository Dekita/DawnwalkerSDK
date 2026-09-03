#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAISituationProcessor.h"
#include "RebelAISituationProcessor_StubIsInSight.generated.h"

class URebelAIStub;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELAI_API URebelAISituationProcessor_StubIsInSight : public URebelAISituationProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URebelAIStub> InstigatorPtr;
    
public:
    URebelAISituationProcessor_StubIsInSight();

};

