#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DismembermentAnimInstance.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class DOGWOODINVENTORY_API UDismembermentAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SourceMeshComponent;
    
    UDismembermentAnimInstance();

};

