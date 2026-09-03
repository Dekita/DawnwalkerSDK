#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "BiomesPCGWorldSubsystem.generated.h"

class ABiomesPCGWorldSettings;

UCLASS(Blueprintable)
class ERRANTBIOMESPCG_API UBiomesPCGWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABiomesPCGWorldSettings* BiomesPCGWorldSettings;
    
public:
    UBiomesPCGWorldSubsystem();

};

