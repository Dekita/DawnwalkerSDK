#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActorStubDebug.generated.h"

class UActorStubDebugLogLine;

UCLASS(Blueprintable)
class POPULATION_API UActorStubDebug : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowLocation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UActorStubDebugLogLine*> LogLines;
    
public:
    UActorStubDebug();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UActorStubDebugLogLine*> GetLogLines() const;
    
};

