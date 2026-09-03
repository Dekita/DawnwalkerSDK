#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAISituationProcessor.h"
#include "DawnwalkerAISituationProcessor_CommunityChatAreas.generated.h"

class URebelAIStub;
class URebelSpatialLayer;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UDawnwalkerAISituationProcessor_CommunityChatAreas : public URebelAISituationProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URebelAIStub> InstigatorPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelSpatialLayer* StubLayer;
    
public:
    UDawnwalkerAISituationProcessor_CommunityChatAreas();

};

