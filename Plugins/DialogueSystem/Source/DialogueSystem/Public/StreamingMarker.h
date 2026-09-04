#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StreamingMarker.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API AStreamingMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StreamingRadius;
    
    AStreamingMarker(const FObjectInitializer& ObjectInitializer);

};

