#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PersistencyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PERSISTENCY_API UPersistencyComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPersistencyComponent(const FObjectInitializer& ObjectInitializer);

};

