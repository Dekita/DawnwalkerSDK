#pragma once
#include "CoreMinimal.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "RuntimeGraphDescriptor.h"
#include "ParameterBlueprintGeneratedClass.generated.h"

UCLASS(Blueprintable)
class NODERUNTIME_API UParameterBlueprintGeneratedClass : public UBlueprintGeneratedClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeGraphDescriptor> GraphDescriptors;
    
    UParameterBlueprintGeneratedClass();

};

