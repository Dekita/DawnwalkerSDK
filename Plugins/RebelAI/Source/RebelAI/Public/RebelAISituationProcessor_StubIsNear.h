#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAISituationProcessor.h"
#include "RebelAISituationProcessor_StubIsNear.generated.h"

class URebelAIStub;
class URebelSpatialLayer;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELAI_API URebelAISituationProcessor_StubIsNear : public URebelAISituationProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URebelAIStub> InstigatorPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelSpatialLayer* StubLayer;
    
public:
    URebelAISituationProcessor_StubIsNear();

};

