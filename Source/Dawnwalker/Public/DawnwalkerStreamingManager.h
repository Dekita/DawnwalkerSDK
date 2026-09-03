#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "StreamingEntry.h"
#include "DawnwalkerStreamingManager.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerStreamingManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FStreamingEntry> AddressableStreamingSources;
    
public:
    UDawnwalkerStreamingManager();

};

