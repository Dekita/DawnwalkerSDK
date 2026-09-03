#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StandinProxyEntry.h"
#include "StandinProxyContainer.generated.h"

UCLASS(Blueprintable)
class STANDINACTOR_API UStandinProxyContainer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStandinProxyEntry> Standins;
    
public:
    UStandinProxyContainer();

};

