#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RebelAIBlueprintReference.h"
#include "RebelAIStructReference.h"
#include "RebelAITestClass.generated.h"

UCLASS(Blueprintable)
class REBELAI_API ARebelAITestClass : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIStructReference StructReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIBlueprintReference BlueprintReference;
    
    ARebelAITestClass(const FObjectInitializer& ObjectInitializer);

};

