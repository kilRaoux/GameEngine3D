#include <Opal.h>
class SandBox : public Opal::Application 
{
public:
	SandBox() {

	}
	~SandBox() {

	}
};
Opal::Application* Opal::CreateApplication() {
	return new SandBox();
}