#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerBlackBox.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UPlayerBlackBox : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerBlackBox(const FObjectInitializer& ObjectInitializer);

};

