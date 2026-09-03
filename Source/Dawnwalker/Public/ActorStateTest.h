#pragma once
#include "CoreMinimal.h"
#include "StaticActorState.h"
#include "ActorStateTest.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API UActorStateTest : public UStaticActorState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValueToSet;
    
public:
    UActorStateTest();

};

