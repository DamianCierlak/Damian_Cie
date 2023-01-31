// Deklaracja klasy
class ErrorHandle {
public:
  // Konstruktor
  ErrorHandle();

  // Metoda publiczna do obsługi błędu
  void handleError(int errorCode);

private:
  // Prywatne metody pomocnicze
  void logError(int errorCode);
  void notifyUser(int errorCode);
};

// Definicja klasy
ErrorHandle::ErrorHandle() {
  // Konstruktor nie zawiera kodu
}

void ErrorHandle::handleError(int errorCode) {
  logError(errorCode);
  notifyUser(errorCode);
}

void ErrorHandle::logError(int errorCode) {
  // Kod do logowania błędu
}

void ErrorHandle::notifyUser(int errorCode) {
  // Kod do powiadamiania użytkownika o błędzie
}
