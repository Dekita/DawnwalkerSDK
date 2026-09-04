#pragma once
#include "CoreMinimal.h"
#include "CineCameraComponent.h"
#include "GameplayTagContainer.h"
#include "CinematicCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DIALOGUESYSTEM_API UCinematicCameraComponent : public UCineCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FocusActorTag;
    
    UCinematicCameraComponent();

};

