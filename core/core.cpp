
#include "core.h"
#include <limits>

std::string operator+(const char *p_chr, const std::string &p_str) {
	std::string tmp = p_chr;
	tmp += p_str;
	return tmp;
}

NS_NAMESPACE_BEGIN

const FrameIndex FrameIndex::NONE = { std::numeric_limits<std::uint32_t>::max() };
const SyncGroupId SyncGroupId::NONE = { std::numeric_limits<std::uint32_t>::max() };
const SyncGroupId SyncGroupId::GLOBAL = { 0 };
const VarId VarId::NONE = { std::numeric_limits<uint32_t>::max() };
const ObjectLocalId ObjectLocalId::NONE = { std::numeric_limits<uint32_t>::max() };
const ObjectNetId ObjectNetId::NONE = { std::numeric_limits<uint32_t>::max() };
const ObjectHandle ObjectHandle::NONE = { 0 };

static const char *ProcessPhaseName[PROCESSPHASE_COUNT] = {
	"EARLY PROCESS",
	"PRE PROCESS",
	"PROCESS",
	"POST PROCESS",
	"LATE PROCESS"
};

const char *get_process_phase_name(ProcessPhase pp) {
	return ProcessPhaseName[pp];
}

NS_NAMESPACE_END
