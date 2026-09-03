#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BigObjectInvestigationActor.generated.h"

class UBigObjectInvestigationComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API ABigObjectInvestigationActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBigObjectInvestigationComponent* InvestigationComponent;
    
    ABigObjectInvestigationActor(const FObjectInitializer& ObjectInitializer);

};

