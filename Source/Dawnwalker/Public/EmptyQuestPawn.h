#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EmptyQuestPawn.generated.h"

class UActorStubComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API AEmptyQuestPawn : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorStubComponent* StubComponent;
    
    AEmptyQuestPawn(const FObjectInitializer& ObjectInitializer);

};

