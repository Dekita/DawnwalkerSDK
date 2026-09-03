#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerCharacterSocket.h"
#include "DawnwalkerCharacterMeshSocket.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerCharacterMeshSocket : public FDawnwalkerCharacterSocket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    FDawnwalkerCharacterMeshSocket();
};

