#undef  _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

#include <vector>
#include <algorithm>

struct Station {
	size_t id;
	std::vector<size_t> taxi;
	std::vector<size_t> bus;
	std::vector<size_t> metro;
	std::vector<size_t> boat;

	Station(size_t id, const std::vector<size_t> &taxi, const std::vector<size_t> &bus, const std::vector<size_t> &metro, const std::vector<size_t> &boat)
	:
		id(id),
		taxi(taxi),
		bus(bus),
		metro(metro),
		boat(boat)
	{

	}
};

Station stations[] =

// Edition without 200 (R)
{
		Station(0,{},{},{},{}),
		Station(1,{ 8, 9 },{ 46, 58 },{ 46 },{}),
		Station(2,{ 20, 10 },{},{},{}),
		Station(3,{ 4, 11, 12 },{ 22, 23 },{},{}),
		Station(4,{ 3, 13 },{},{},{}),
		Station(5,{ 15, 16 },{},{},{}),
		Station(6,{ 29, 7 },{},{},{}),
		Station(7,{ 6, 17 },{ 42 },{},{}),
		Station(8,{ 1, 18, 19 },{},{},{}),
		Station(9,{ 1, 19, 20 },{},{},{}),
		Station(10,{ 2, 21, 34, 11 },{},{},{}),
		Station(11,{ 10, 3, 22 },{},{},{}),
		Station(12,{ 3, 23 },{},{},{}),
		Station(13,{ 4, 23, 14, 24 },{ 14, 23, 52 },{ 46, 67, 89 },{}),
		Station(14,{ 13, 25, 15 },{ 13, 15 },{},{}),
		Station(15,{ 5, 14, 16, 26, 28 },{ 14, 41, 29 },{},{}),
		Station(16,{ 15, 5, 29, 28 },{},{},{}),
		Station(17,{ 7, 29, 30 },{},{},{}),
		Station(18,{ 8, 31, 43 },{},{},{}),
		Station(19,{ 8, 9, 32 },{},{},{}),
		Station(20,{ 9, 2, 33 },{},{},{}),
		Station(21,{ 33, 10 },{},{},{}),
		Station(22,{ 11, 34, 35, 23 },{ 34, 23, 3, 65 },{},{}),
		Station(23,{ 12, 22, 37, 13 },{ 13, 22, 3, 67 },{},{}),
		Station(24,{ 13, 37, 38 },{},{},{}),
		Station(25,{ 14, 39, 38 },{},{},{}),
		Station(26,{ 15, 27, 39 },{},{},{}),
		Station(27,{ 26, 28, 40 },{},{},{}),
		Station(28,{ 15, 27, 16, 41 },{},{},{}),
		Station(29,{ 16, 6, 17, 42, 41 },{ 42, 15, 41, 55 },{},{}),
		Station(30,{ 17, 42 },{},{},{}),
		Station(31,{ 18, 43, 44 },{},{},{}),
		Station(32,{ 19,33,44,45 },{},{},{}),
		Station(33,{ 20,21,32,46 },{},{},{}),
		Station(34,{ 10,22,48,47 },{ 22,46,63 },{},{}),
		Station(35,{ 48,22,36,65 },{},{},{}),
		Station(36,{ 35,49,37 },{},{},{}),
		Station(37,{ 23,36,50,24 },{},{},{}),
		Station(38,{ 24,50,25,51 },{},{},{}),
		Station(39,{ 25,51,52,26 },{},{},{}),
		Station(40,{ 27,52,53,41 },{},{},{}),
		Station(41,{ 28,40,54,29 },{ 52,29,87,15 },{},{}),
		Station(42,{ 29,30,72,56 },{ 29,7,72 },{},{}),
		Station(43,{ 18,31,57 },{},{},{}),
		Station(44,{ 31,32,58 },{},{},{}),
		Station(45,{ 32,58,46,60,59 },{},{},{}),
		Station(46,{ 33,45,61,47 },{ 1,58,78,34 },{ 1,74,79,13 },{}),
		Station(47,{ 46,62,34 },{},{},{}),
		Station(48,{ 34,62,63,35 },{},{},{}),
		Station(49,{ 36,66,50 },{},{},{}),
		Station(50,{ 37,38,49 },{},{},{}),
		Station(51,{ 38,39,52,68,67 },{},{},{}),
		Station(52,{ 39,51,40,69 },{ 13,67,86,41 },{},{}),
		Station(53,{ 40,69,54 },{},{},{}),
		Station(54,{ 41,53,70,55 },{},{},{}),
		Station(55,{ 54,71 },{ 29,89 },{},{}),
		Station(56,{ 42,91 },{},{},{}),
		Station(57,{ 43,58,73 },{},{},{}),
		Station(58,{ 44,57,45,59,75,74 },{ 1,46,77,74 },{},{}),
		Station(59,{ 58,45,75,76 },{},{},{}),
		Station(60,{ 45,61,76 },{},{},{}),
		Station(61,{ 46,62,60,76,78 },{},{},{}),
		Station(62,{ 61,47,48,79 },{},{},{}),
		Station(63,{ 48,79,64,80 },{ 34,79,65,100 },{},{}),
		Station(64,{ 63,81,65 },{},{},{}),
		Station(65,{ 35,66,82,64 },{ 22,67,82,63 },{},{}),
		Station(66,{ 49,65,67,82 },{},{},{}),
		Station(67,{ 51,68,84,66 },{ 52,23,65,82,102 },{ 13,89,79,111 },{}),
		Station(68,{ 51,69,67,85 },{},{},{}),
		Station(69,{ 52,53,68,86 },{},{},{}),
		Station(70,{ 54,71,87 },{},{},{}),
		Station(71,{ 55,70,72,89 },{},{},{}),
		Station(72,{ 71,42,91,90 },{ 42,107,105 },{},{}),
		Station(73,{ 57,74,92 },{},{},{}),
		Station(74,{ 73,92,58,75 },{ 58,94 },{ 46 },{}),
		Station(75,{ 74,58,59,94 },{},{},{}),
		Station(76,{ 59,60,77,61 },{},{},{}),
		Station(77,{ 76,78,96,95 },{ 58,78,94,124 },{},{}),
		Station(78,{ 61,77,79,97 },{ 77,79,46 },{},{}),
		Station(79,{ 62,78,98,63 },{ 78,63 },{ 46,93,67,111 },{}),
		Station(80,{ 63,99,100 },{},{},{}),
		Station(81,{ 64,82,100 },{},{},{}),
		Station(82,{ 65,66,101,81 },{ 65,67,100,140 },{},{}),
		Station(83,{ 102,101 },{},{},{}),
		Station(84,{ 67,85 },{},{},{}),
		Station(85,{ 68,84,103 },{},{},{}),
		Station(86,{ 69,103,104 },{ 52,102,87,116 },{},{}),
		Station(87,{ 88,70 },{ 41,86,105 },{},{}),
		Station(88,{ 87,89,117 },{},{},{}),
		Station(89,{ 88,105,71 },{ 55,105 },{ 140,67,128,13 },{}),
		Station(90,{ 72,91,105 },{},{},{}),
		Station(91,{ 72,56,90,105,107 },{},{},{}),
		Station(92,{ 73,74,93 },{},{},{}),
		Station(93,{ 92,94 },{ 94 },{ 79 },{}),
		Station(94,{ 93,75,95 },{ 74,93,77 },{},{}),
		Station(95,{ 94,122,77 },{},{},{}),
		Station(96,{ 77,97,109 },{},{},{}),
		Station(97,{ 78,96,98,109 },{},{},{}),
		Station(98,{ 79,97,99,110 },{},{},{}),
		Station(99,{ 98,80,110 },{},{},{}),
		Station(100,{ 80,81,101,113,112 },{ 82,63,111 },{},{}),
		Station(101,{ 100,114,83,82 },{},{},{}),
		Station(102,{ 83,103,115 },{ 67,127,86 },{},{}),
		Station(103,{ 85,102,86 },{},{},{}),
		Station(104,{ 86,116 },{},{},{}),
		Station(105,{ 89,90,91,106,108 },{ 87,89,72,107,108 },{},{}),
		Station(106,{ 105,107 },{},{},{}),
		Station(107,{ 91,106,119 },{ 72,105,161 },{},{}),
		Station(108,{ 105,119,117 },{ 105,116,135 },{},{115}),
		Station(109,{ 96,97,110,124 },{},{},{}),
		Station(110,{ 109,98,99,111 },{},{},{}),
		Station(111,{ 110,112,124 },{ 124,100 },{ 163,153,79,67 },{}),
		Station(112,{ 111,125,100 },{},{},{}),
		Station(113,{ 100,125,114 },{},{},{}),
		Station(114,{ 101,113,131,115,126,132 },{},{},{}),
		Station(115,{ 102,114,126,127 },{},{},{157,108}),
		Station(116,{ 104,127,117,118 },{ 86,108,127,142 },{},{}),
		Station(117,{ 88,116,108,129 },{},{},{}),
		Station(118,{ 116,134,129,142 },{},{},{}),
		Station(119,{ 108,107,136 },{},{},{}),
		Station(120,{ 121,144 },{},{},{}),
		Station(121,{ 120,122,145 },{},{},{}),
		Station(122,{ 95,121,146,123 },{ 123,144 },{},{}),
		Station(123,{ 122,124,137,148,149 },{ 122,144,165,124 },{},{}),
		Station(124,{ 109,111,130,138,123 },{ 77,111,153,123 },{},{}),
		Station(125,{ 112,113,131 },{},{},{}),
		Station(126,{ 114,115,127,140 },{},{},{}),
		Station(127,{ 126,115,116,134,133 },{ 102,116,133 },{},{}),
		Station(128,{ 142,143,160,172,188 },{ 135,161,199,187,142 },{140,89,185},{}),
		Station(129,{ 118,117,135,143,142 },{},{},{}),
		Station(130,{ 124,131,139 },{},{},{}),
		Station(131,{ 125,130,114 },{},{},{}),
		Station(132,{ 114,140 },{},{},{}),
		Station(133,{ 140,127,141 },{ 127,140,157 },{},{}),
		Station(134,{ 127,118,141,142 },{},{},{}),
		Station(135,{ 129,136,143,161 },{ 108,128,161 },{},{}),
		Station(136,{ 119,135,162 },{},{},{}),
		Station(137,{ 123,147 },{},{},{}),
		Station(138,{ 124,150,152 },{},{},{}),
		Station(139,{ 130,140,154,153 },{},{},{}),
		Station(140,{ 132,126,133,156,154,139 },{ 82,133,156,154 },{ 89,128,153 },{}),
		Station(141,{ 133,134,158,142 },{},{},{}),
		Station(142,{ 141,134,118,143,128,158,129 },{ 116,128,157 },{},{}),
		Station(143,{ 142,129,135,160,128 },{},{},{}),
		Station(144,{ 120,145,177 },{ 123,122,163 },{},{}),
		Station(145,{ 144,121,146 },{},{},{}),
		Station(146,{ 122,145,163,147 },{},{},{}),
		Station(147,{ 146,137,164 },{},{},{}),
		Station(148,{ 123,149,164 },{},{},{}),
		Station(149,{ 123,148,150,165 },{},{},{}),
		Station(150,{ 149,151,138 },{},{},{}),
		Station(151,{ 150,152,166,165 },{},{},{}),
		Station(152,{ 138,151,153 },{},{},{}),
		Station(153,{ 152,139,154,167,166 },{ 124,154,184,180 },{ 163,111,140,185 },{}),
		Station(154,{ 139,140,153,155 },{ 153,140,156 },{},{}),
		Station(155,{ 154,167,168,156 },{},{},{}),
		Station(156,{ 140,155,157,169 },{ 140,154,157,184 },{},{}),
		Station(157,{ 156,158,170 },{ 133,156,142,185 },{},{194,115}),
		Station(158,{ 141,142,157,159 },{},{},{}),
		Station(159,{ 158,170,172,186 },{},{},{}),
		Station(160,{ 143,128,161,173 },{},{},{}),
		Station(161,{ 135,160,174 },{ 135,107,128,199 },{},{}),
		Station(162,{ 136,175 },{},{},{}),
		Station(163,{ 146,177 },{ 144,176,191 },{ 111,153 },{}),
		Station(164,{ 147,148,179,178 },{},{},{}),
		Station(165,{ 149,151,179,180 },{ 123,191,180 },{},{}),
		Station(166,{ 151,153,183,181 },{},{},{}),
		Station(167,{ 153,155,168,183 },{},{},{}),
		Station(168,{ 167,155,184 },{},{},{}),
		Station(169,{ 156,184 },{},{},{}),
		Station(170,{ 157,159,185 },{},{},{}),
		Station(171,{ 173,199,175 },{},{},{}),
		Station(172,{ 159,128,187 },{},{},{}),
		Station(173,{ 188,160,174,171 },{},{},{}),
		Station(174,{ 161,173,175 },{},{},{}),
		Station(175,{ 174,162,171 },{},{},{}),
		Station(176,{ 177,189 },{ 163,190 },{},{}),
		Station(177,{ 144,176,163 },{},{},{}),
		Station(178,{ 164,189,191 },{},{},{}),
		Station(179,{ 164,165,191 },{},{},{}),
		Station(180,{ 165,181,193 },{ 165,153,184,190 },{},{}),
		Station(181,{ 180,166,182,193 },{},{},{}),
		Station(182,{ 181,183,195 },{},{},{}),
		Station(183,{ 166,182,196,167 },{},{},{}),
		Station(184,{ 168,169,185,197,196 },{ 153,156,180,185 },{},{}),
		Station(185,{ 184,170,186 },{ 157,187,184 },{ 128,153 },{}),
		Station(186,{ 185,198,159 },{},{},{}),
		Station(187,{ 172,188,198 },{ 128,185 },{},{}),
		Station(188,{ 187,128,173,199 },{},{},{}),
		Station(189,{ 176,190,178 },{},{},{}),
		Station(190,{ 189,191,192 },{ 176,191,180 },{},{}),
		Station(191,{ 178,179,190,192 },{ 163,165,190 },{},{}),
		Station(192,{ 190,191,194 },{},{},{}),
		Station(193,{ 180,181,194 },{},{},{}),
		Station(194,{ 193,195,192 },{},{},{157}),
		Station(195,{ 194,182,197 },{},{},{}),
		Station(196,{ 183,184,197 },{},{},{}),
		Station(197,{ 196,195,184 },{},{},{}),
		Station(198,{ 186,187,199 },{},{},{}),
		Station(199,{ 198,188,171 },{ 128,161 },{},{})
};

// Edition with 200 (MB)
// ?



// Differences (thanks to Mark McEvoy for this):
//  MB#200 is R#171
//  MB#171 is R#159
//  MB#159 is R#128
//  MB#128 is R#118
//  MB#118 is R#108
//  
//  There is no MB#108
//  There is no R#200

#define NUM_STATIONS (sizeof(stations)/sizeof(stations[0]))

std::vector<size_t> possiblePositions = {13, 25, 29, 34, 50, 53 ,91 ,94 ,103, 112, 117, 132, 138, 141, 155, 174, 197, 198};
std::vector<size_t> blockages;
std::vector<size_t> detectives;

size_t ReadInt() {
	int n;
	scanf("%d", &n);
	return size_t(n);
}

bool IsBlocked(size_t station) {
	for(size_t v : blockages) {
		if(station == v) return true;
	}

	for(size_t v : detectives) {
		if(station == v) return true;
	}
	
	return false;
}

int main() {

	for(size_t a = 1; a < NUM_STATIONS; ++a) {
		if(stations[a].id != a) printf("Station id %d is incorrect\n", int(a));
		for(size_t b : stations[a].taxi) {
			if(b >= NUM_STATIONS) {
				printf("Station %d referred from %d doesn't exist\n", int(b), int(a));
				continue;
			}

			auto it = std::find(stations[b].taxi.begin(), stations[b].taxi.end(), a);
			if(it == stations[b].taxi.end()) {
				printf("%d can take a taxi to %d, but the reverse is not possible, might be an error.\n", int(a), int(b));
			}
		}

		for(size_t b : stations[a].bus) {
			if(b >= NUM_STATIONS) {
				printf("Station %d referred from %d doesn't exist\n", int(b), int(a));
				continue;
			}

			auto it = std::find(stations[b].bus.begin(), stations[b].bus.end(), a);
			if(it == stations[b].bus.end()) {
				printf("%d can take a bus to %d, but the reverse is not possible, might be an error.\n", int(a), int(b));
			}
		}

		for(size_t b : stations[a].metro) {
			if(b >= NUM_STATIONS) {
				printf("Station %d referred from %d doesn't exist\n", int(b), int(a));
				continue;
			}

			auto it = std::find(stations[b].metro.begin(), stations[b].metro.end(), a);
			if(it == stations[b].metro.end()) {
				printf("%d can take a metro to %d, but the reverse is not possible, might be an error.\n", int(a), int(b));
			}
		}

		for(size_t b : stations[a].boat) {
			if(b >= NUM_STATIONS) {
				printf("Station %d referred from %d doesn't exist\n", int(b), int(a));
				continue;
			}

			auto it = std::find(stations[b].boat.begin(), stations[b].boat.end(), a);
			if(it == stations[b].boat.end()) {
				printf("%d can take a boat to %d, but the reverse is not possible, might be an error.\n", int(a), int(b));
			}
		}

		std::sort(stations[a].taxi.begin(), stations[a].taxi.end());
		std::sort(stations[a].bus.begin(), stations[a].bus.end());
		std::sort(stations[a].metro.begin(), stations[a].metro.end());
		std::sort(stations[a].boat.begin(), stations[a].boat.end());
	}

	for(;;) {
		char cmd;
		puts("Commands:");
		puts("- x [position] sets Mr. X position");
		puts("- d [n] [position] moves detective [n] to [position]");
		puts("- b [blockages...] 0 sets the blockages positions");
		puts("- z [taxi/bus/metro/unknown] run Mr. X round");
		printf("> ");
		scanf(" %c", &cmd);

		if(cmd == 'x') {
			possiblePositions.clear();
			possiblePositions.push_back(ReadInt());
			std::sort(possiblePositions.begin(), possiblePositions.end());
		} else if(cmd == 'd') {
			size_t d = ReadInt();
			size_t pos = ReadInt();
			while(detectives.size() <= d) detectives.push_back(0);
			detectives[d] = pos;

			// Remove from possible positions
			auto it = std::find(possiblePositions.begin(), possiblePositions.end(), pos);
			if(it != possiblePositions.end()) possiblePositions.erase(it);


		} else if(cmd == 'b') {
			blockages.clear();
			for(;;) {
				size_t n = ReadInt();
				if(n == 0) break;
				blockages.push_back(n);

				// Remove from possible positions
				auto it = std::find(possiblePositions.begin(), possiblePositions.end(), n);
				if(it != possiblePositions.end()) possiblePositions.erase(it);
			}

			std::sort(blockages.begin(), blockages.end());
		} else if(cmd == 'z'){
			char method[16];
			scanf("%s", method);

			size_t l = possiblePositions.size();
			if(strcmp(method, "taxi") == 0) {
				for(size_t i = 0; i < l; ++i) {
					size_t station = possiblePositions[i];
					possiblePositions.insert(possiblePositions.end(), stations[station].taxi.begin(), stations[station].taxi.end());
				}
			}else if(strcmp(method, "bus") == 0) {
				for(size_t i = 0; i < l; ++i) {
					size_t station = possiblePositions[i];
					possiblePositions.insert(possiblePositions.end(), stations[station].bus.begin(), stations[station].bus.end());
				}
			}else if(strcmp(method, "metro") == 0) {
				for(size_t i = 0; i < l; ++i) {
					size_t station = possiblePositions[i];
					possiblePositions.insert(possiblePositions.end(), stations[station].metro.begin(), stations[station].metro.end());
				}
			}else if(strcmp(method, "unknown") == 0) {
				for(size_t i = 0; i < l; ++i) {
					size_t station = possiblePositions[i];
					possiblePositions.insert(possiblePositions.end(), stations[station].taxi.begin(), stations[station].taxi.end());
					possiblePositions.insert(possiblePositions.end(), stations[station].bus.begin(), stations[station].bus.end());
					possiblePositions.insert(possiblePositions.end(), stations[station].metro.begin(), stations[station].metro.end());
					possiblePositions.insert(possiblePositions.end(), stations[station].boat.begin(), stations[station].boat.end());
				}
			} else {
				fseek(stdin, 0, SEEK_END);
				puts("Unknown command");
				continue;
			}

			std::vector<size_t> res;
			for(size_t i = l; i < possiblePositions.size(); ++i) {
				size_t station = possiblePositions[i];
				if(IsBlocked(station)) continue;
				
				// Duplicate
				for(size_t j = l; j < i; ++j) {
					if(possiblePositions[j] == station) goto NextIt;
				}

				res.push_back(station);

				NextIt:;
			}

			std::sort(res.begin(), res.end());
			std::swap(res, possiblePositions);

		} else {
			fseek(stdin, 0, SEEK_END);
			puts("Unknown command");
			continue;
		}


		puts("Status:");

		printf("- Blockages: ");
		for(size_t v : blockages) printf("%d ", int(v));
		putchar('\n');
		putchar('\n');

		puts("- Detectives:");
		for(size_t i = 0; i < detectives.size(); ++i) {
			printf("    Detective %d at station %d\n", int(i), int(detectives[i]));
		}
		putchar('\n');
		putchar('\n');

		printf("- Possible Mr. X positions:");
		{
			size_t c = 0;
			for(size_t v : possiblePositions) {
				if(c++ % 10 == 0) {
					printf("\n   ");
				}

				printf("%d ", int(v));
			}
		}
		putchar('\n');
		putchar('\n');

	}
}