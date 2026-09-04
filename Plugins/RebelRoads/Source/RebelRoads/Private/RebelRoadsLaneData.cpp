#include "RebelRoadsLaneData.h"

FRebelRoadsLaneData::FRebelRoadsLaneData() {
    this->SegmentIdx = 0;
    this->LaneProfileIdx = 0;
    this->LaneIndices[0] = 0;
    this->LaneIndices[1] = 0;
    this->LeftBoundaryIndices[0] = 0;
    this->LeftBoundaryIndices[1] = 0;
    this->RightBoundaryIndices[0] = 0;
    this->RightBoundaryIndices[1] = 0;
    this->WaitPointIndices[0] = 0;
    this->WaitPointIndices[1] = 0;
    this->LaneLinksStartIdx = 0;
    this->LaneLinksNum = 0;
    this->Flags = 0;
}

