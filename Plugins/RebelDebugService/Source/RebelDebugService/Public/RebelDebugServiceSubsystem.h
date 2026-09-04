#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RebelDebugServiceSubsystem.generated.h"

class URebelDebugServiceExtension;

UCLASS(Blueprintable)
class REBELDEBUGSERVICE_API URebelDebugServiceSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URebelDebugServiceExtension*> Extensions;
    
public:
    URebelDebugServiceSubsystem();

};

