pipeline {
    agent any

    stages {

        stage('Clonación') {
            steps {
                echo 'Clonando el repositorio remoto...'
            }
        }

        stage('Compilación') {
            steps {
                echo 'Compilando el proyecto...'
                sh 'gcc -o app app.c'
            }
        }

        stage('Tests') {
            steps {
                echo 'Realizando Pruebas Unitarias...'
                sh 'gcc -o test_app test_app.c && ./test_app'
            }
        }

        stage('Despliegue') {
            steps {
                echo 'En un futuro desplegaremos la aplicación!!!'
            }
        }
    }
}
stage('Tests') {
    steps {
        echo 'Realizando Pruebas Unitarias...'
        sh 'gcc -o test_app test_app.c app.c && ./test_app'
    }
}
