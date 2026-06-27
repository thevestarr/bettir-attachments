// if you know how to figure out the inheritance, be my guest and make a PR 
// TODO: Find some better values, these flashlights are really dark
// and WMX is a LED I think, probably needs a colder beam

#define RHS_M952V_FLASHLIGHT_CONFIG \
	ambient[] = {0.001,0.001,0.001}; \
	color[] = {25,22,20}; \
	intensity = 330; \
	coneFadeCoef = 10; \
	dayLight = 1; \
	direction = "flash"; \
	position = "flash dir"; \
	flareSize = 0.7; \
	innerAngle = 50; \
	outerAngle = 120; \
	scale[] = {1,1,1}; \
	size = 1; \
	useFlare = 1; \
	class Attenuation { \
		start=0; \
		constant=2;\
		linear=1;\
		quadratic=75;\
	};


#define RHS_WMX_FLASHLIGHT_CONFIG \
	ambient[] = {0.001,0.001,0.001}; \
	color[] = {25,22,20}; \
	intensity = 330; \
	coneFadeCoef = 10; \
	dayLight = 1; \
	direction = "flash"; \
	position = "flash dir"; \
	flareSize = 0.7; \
	innerAngle = 50; \
	outerAngle = 120; \
	scale[] = {1,1,1}; \
	size = 1; \
	useFlare = 1;\
	class Attenuation { \
		start=0; \
		constant=2;\
		linear=1;\
		quadratic=75;\
	};