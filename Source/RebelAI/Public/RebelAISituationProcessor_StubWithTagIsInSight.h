#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAISituationProcessor.h"
#include "RebelAISituationProcessor_StubWithTagIsInSight.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELAI_API URebelAISituationProcessor_StubWithTagIsInSight : public URebelAISituationProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
public:
    URebelAISituationProcessor_StubWithTagIsInSight();

};

