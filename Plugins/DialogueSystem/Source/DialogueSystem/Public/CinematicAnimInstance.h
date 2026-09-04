#pragma once
#include "CoreMinimal.h"
#include "CinematicAnimInstanceBase.h"
#include "LookAtData.h"
#include "CinematicAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class DIALOGUESYSTEM_API UCinematicAnimInstance : public UCinematicAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtData LookAtData;
    
public:
    UCinematicAnimInstance();

};

