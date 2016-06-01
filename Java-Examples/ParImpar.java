
/**
 * si se selecciona hallar par sale True si es y si no False de mismo el de Impar
 * 
 * @author Juan David Perez Perez
 * @version Taller 1 Punto g
 */

public final class ParImpar {
	public ParImpar () {
	}
 
	public static boolean esPar(int x) {
		if ((x % 2) == 0) {
			return true;
		}
 
		return false;
	}
 
	public static boolean esImpar(int x) {
		return !esPar(x);
	}
}